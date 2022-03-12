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
char a[1005][1005];
int dp[2005][2], cnt[1005], sum[1005];

void solve() {
    for(int i=0;i<m;i++){
        for(int j=x;j<=y;j++){
            if(i+j>m) break;
            dp[i+j][0]=min(dp[i+j][0],dp[i][1]+sum[i+j]-sum[i]);
            dp[i+j][1]=min(dp[i+j][1],dp[i][0]+n*j-(sum[i+j]-sum[i]));
        }
    }
    cout<<min(dp[m][0], dp[m][1]);
}


int main() {
   cin>>n>>m>>x>>y;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++)
            if(a[i][j]=='#') cnt[j]++;
    for(int i=0;i<m;i++) sum[i+1]=sum[i]+cnt[i];
    clr(dp, 90);
    dp[0][0]=dp[0][1]=0;
    solve();
    return 0;
}