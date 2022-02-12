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

const int OO = (int) 1e5;	//Small -> WRONG, Large -> OVERFLOW
const int MAXN = 1<<30;

int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };

int row[] = {2, 2, -2, -2, 1, 1, -1, -1 };
int col[] = {-1, 1, 1, -1, 2, -2, 2, -2 };
const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 100+10;

int n;
int dp[N][3];
int a[N];
void solve()
{

    for(int i = 1 ; i<=n ; i++)
        for (int j = 0; j <= 2; j++) {
            if (dp[i-1][j]!=OO)
            {
                if ((a[i]&1) && j!=0) dp[i][0] = min(dp[i][0], dp[i-1][j]);
                if ((a[i]&2) && j!=1) dp[i][1] = min(dp[i][1], dp[i-1][j]);
                dp[i][2] = min(dp[i][2], dp[i-1][j]+1);
            }
        }
        int ans = min(dp[n][0], min(dp[n][1],dp [n][2]));
        cout<<ans;
}

int main() {
    cin>>n;
    for(int i = 1 ; i <=n ; i++)
        cin>>a[i];
    for(int i = 1 ; i<=n ; i++)
        for (int j = 0; j <= 2; j++) {
            dp[i][j]=OO;
        }
    dp[0][2]=0;
    solve();
    return 0;
}