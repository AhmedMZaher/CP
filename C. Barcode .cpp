#include<set>
#include<map>
#include<list>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<numeric>
#include<utility>
#include <functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
using namespace std;

#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		    for(int i=0;i<sz(v);++i)
#define lp(i, n)		    for(ll i=0;i<(ll)(n);++i)
#define lpi(i, j, n)	    for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	    for(int i=(j);i>=(int)(n);--i)
#define repa(v)			    lpi(i, 0, sz(v)) lpi(j, 0, sz(v[i]))
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
#define pb					push_back
#define MP					make_pair
#define el                  endl
#define INF 9999

typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> PII;

const int OO = (int) 1e6;	//Small -> WRONG, Large -> OVERFLOW
const int MAXN = 1<<30;

int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx6[]= {0,0,1,-1,0,0};
int dy6[]= {1,-1,0,0,0,0};
int dz6[]= {0,0,0,0,1,-1};
int dx8[]= {1,-1,0,0,-1,1,-1,1};
int dy8[]= {0,0,1,-1,1,1,-1,-1};
int dkx8[]= {-1,1,-1,1,-2,-2,2,2};
int dky8[]= {2,2,-2,-2,1,-1,1,-1};

const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 30;
const int MOD = 1000003;

int n, m, x, y;

int dotsCnt[1000+9];
int dp[1000+9][1000+9][3]; // 0 : (dots), 1 (hashes), 2(nothing)

int solve(int col, int width, int last)
{
    if(col == m)
    {
        if(width < x || width > y)
            return 100000000;
        return 0;
    }

    int &ret = dp[col][width][last];

    if(ret != -1)
        return ret;

    int dots = 100000000;
    if(col == 0 || (last == 0 && width + 1 <= y) || (last == 1 && width >= x))
        dots = n - dotsCnt[col] + solve(col + 1,(last == 0) ? width + 1 : 1,0);

    int hashes = 100000000;
    if(col == 0 || (last == 1 && width + 1 <= y) || (last == 0 && width >= x))
        hashes = dotsCnt[col] + solve(col + 1,(last == 1) ? width + 1 : 1,1);

    ret = min(dots, hashes);

    return ret;
}


int main() {
    cin>>n>>m>>x>>y;
    lp(i, n)
        lp(j, m)
        {
            char ch;
            cin>>ch;
            if(ch == '.')dotsCnt[j]++;
        }
    clr(dp, -1);
    cout<<solve(0, 0, 2);
    return 0;
}