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
#define sparnke iostream::sync_with_stdio(0); cin.tie(0) ; cout.tie(0) ;
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
typedef vector<vi> vvi;
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
const ll N = 2e5 + 10;
const ll MOD = 1e5 + 7 ;

int n, m;
vector <int> adj[N];
bool vis1[N];
int vis2[N];
vector<int> topo;

bool cycle(int u)
{
    vis2[u] = 1;
    for (auto v:adj[u]) {
        if(!vis2[v])
        {
            if(cycle(v))
                return true;
        }
        else if (vis2[v] == 1)
            return 1;
    }
    vis2[u] = 2;
    return 0;
}


void dfs(int u)
{
    vis1[u] = true;
    for (auto x:adj[u]) {
        if(!vis1[x])
            dfs(x);
    }
    topo.pb(u);
}
int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            swap(x, y);
            adj[x].pb(y);
        }
        for (int i = 1; i <= n; ++i)
        {
            if (!vis2[i] && cycle(i)) {
                cout << "IMPOSSIBLE";
                return 0;
            }
            if (!vis1[i])dfs(i);
        }
        for (int i = 0; i < n; ++i) {
            cout << topo[i] << " ";
        }
    }
    return 0;
}