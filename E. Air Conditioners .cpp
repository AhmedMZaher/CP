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
# include <cstring>
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
const ll N = 200005;
const ll MOD = 1e9 + 7 ;


void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(k);
    lp(i, k)
    cin >> a[i];
    vi t(k);
    lp(i, k)
        cin >> t[i];
    vector<ll> c(n, INT_MAX);
    lp(i, k)
    c[a[i] - 1] = t[i];

    ll p = INT_MAX;

    vector<ll> L(n, INT_MAX);
    lp(i, n) {
        p = min(p + 1, c[i]);
        L[i] = p;
    }

    vector<ll> R(n, INT_MAX);
    p = INT_MAX;
    for (int i = n - 1; i >= 0; i--) {
        p = min(p + 1, c[i]);
        R[i] = p;
    }
    lp(i, n)
        cout << min(L[i], R[i])<< " ";
    cout << el;
}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

}