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
#include <climits>
using namespace std;

#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		    for(int i=0;i<sz(v);++i)
#define lp(i, n)		    for(ll i=0;i<(ll)(n);++i)
#define lpi(i, j, n)	    for(ll i=(j);i<(ll)(n);++i)
#define lpd(i, j, n)	    for(ll i=(j);i>=(ll)(n);--i)
#define repa(v)			    lpi(i, 0, sz(v)) lpi(j, 0, sz(v[i]))
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
#define pb					push_back
#define f first
#define s second
#define MP					make_pair
#define el                  endl
#define INF LONG_LONG_MAX

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;


typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;




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
const int N = 1e5 + 10;
const ll MOD = 1e9 + 7 ;

int n, m;
int a[N];

void solve()
{
    cin >> n >> m;
    lp(i, n) cin >> a[i];

    ll l = 1, r = 1e15, ans = -1;

    while (l <= r)
    {
        ll pos = n - 1, prev = 0, mid = (l + r)  / 2;
        while(a[pos] == 0)pos--;
        for (int i = 0; i < m && pos >= 0; ++i) {
            ll temp = mid + prev - pos;
            while(pos >= 0 && temp >= a[pos])
            {
                temp -= a[pos];
                pos--;
            }
            prev = temp;
        }
        if(pos < 0)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout<<ans + 1<< el;
}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    solve();
    return 0;
}