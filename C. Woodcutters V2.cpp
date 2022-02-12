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
const int N = 100009;

int n;
int dp[N][3], h[N], x[N];

void solve()
{
    int i;
    for (i = 1; i < n; i++)
    {
        dp[i][2] = i == n - 1 || x[i] + h[i] < x[i + 1] ? *max_element(dp[i - 1], dp[i - 1] + 3) + 1 : -INF;
        dp[i][1] = *max_element(dp[i - 1], dp[i - 1] + 3);
        dp[i][0] = x[i] - h[i] > x[i - 1] ? max(dp[i - 1][0], dp[i - 1][1]) + 1 : -INF;
        if (x[i - 1] + h[i - 1] < x[i] - h[i])
            dp[i][0] = max(dp[i][0], dp[i - 1][2] + 1);
    }
    cout<<dp[n-1][2];
}

int main() {
    cin>>n;
    lp(i, n)cin>>x[i]>>h[i];
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[0][2] = n == 1 || x[0] + h[0] < x[1] ? 1 : -INF;
    solve();
    return 0;
}