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

vector <int> adj[N];
bool vis[N];
vector <int> ans[2];

void dfs(int node, int lvl)
{
    if(vis[node])
        return;
    vis[node] = true;
    ans[lvl].push_back(node);
    for (auto x:adj[node]) {
        dfs(x, !lvl);
    }
}
int main() {
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            vis[i] = false;
            adj[i].clear();
        }
        ans[0].clear();
        ans[1].clear();
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            --x, --y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        dfs(0, 0);
        if ((int) sz(ans[0]) * 2 <= n)
        {
            cout << sz(ans[0]) << el;
            for (auto x: ans[0])
                cout << x + 1 << " ";
            cout << el;
        }
        else
        {
            cout << sz(ans[1]) << el;
            for (auto x: ans[1])
                cout << x + 1 << " ";
            cout << el;
        }
    }
}