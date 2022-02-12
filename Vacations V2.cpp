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

ll n;
ll dp[N][4];
vector<ll> a(N);

ll solve(ll i, ll last_choice)
{
    if(i == n)
        return 0;

    ll &ret = dp[i][last_choice];

    if(ret != -1)
        return ret;

    ll c0, c1=0, c2 = 0;

    c0 = solve(i+1, 0);

    if( (a[i] == 3 || a[i] == 1) && last_choice != 1)
        c1 = solve(i+1, 1) + 1;
    if( (a[i] == 3 || a[i] == 2) && last_choice != 2)
        c2 = solve(i+1, 2) + 1;

    return max(c0, max(c1, c2));
}

int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    cin>>n;
    for(ll i = 0 ; i < n ; i++)
        cin>>a[i];
    clr(dp,-1);
    cout<< n - solve(0, 0);
    return 0;
}