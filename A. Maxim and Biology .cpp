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
const int N = 1e5 + 9;
const int MOD = 1000003;



void solve() {
    int n;
    string s;
    cin >> n >> s;

    int mn = INT_MAX;
    for (int i = 0; i <= n-4; ++i) {
        int cost = 0;

        int path1 = abs((int)'A' - (int)s[i]);
        int path2 = 26 - path1;
        int costA = min(path1, path2);

        path1 = abs((int)'C' - (int)s[i + 1]);
        path2 = 26 - path1;
        int costB = min(path1, path2);

        path1 = abs((int)'T' - (int)s[i + 2]);
        path2 = 26 - path1;
        int costT = min(path1, path2);

        path1 = abs((int)'G' - (int)s[i + 3]);
        path2 = 26 - path1;
        int costG = min(path1, path2);

        cost += costA + costB + costT + costG;
        mn = min(mn, cost);
    }
    cout<<mn;
}





int main() {
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}