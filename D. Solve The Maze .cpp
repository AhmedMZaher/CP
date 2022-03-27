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
const ll N = 60;
const ll MOD = 1e5 + 7 ;

int n, m;
int Gcnt;
char grid[N][N];
bool vis[N][N];

bool valid(int x, int y)
{
    return x >= 0 && y >= 0 && x < n && y < m && !vis[x][y] && grid[x][y] != '#';
}
int dfs (int x, int y)
{
    if(!valid(x, y))
        return 0;
    if(grid[x][y] == 'B')
        return 0;
    vis[x][y] = true;
    int cnt = (grid[x][y] == 'G');
    for (int k = 0; k < 4; ++k) {
        int dx = x + dx4[k], dy = y + dy4[k];
        cnt += dfs(dx, dy);
    }
    return cnt;
}
bool pre()
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            Gcnt += (grid[i][j] == 'G');
            if (grid[i][j] == 'B') {
                for (int k = 0; k < 4; ++k)
                {
                    int dx = i + dx4[k], dy = j + dy4[k];
                    if (valid(dx, dy)) {
                        if (grid[dx][dy] == 'G')
                            return false;
                        if (grid[dx][dy] == 'B')
                            continue;
                        grid[dx][dy] = '#';
                    }
                }
            }
        }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                vis[i][j] = false;
            }
        }
        Gcnt = 0;
        if(pre())
        {
            if(Gcnt == dfs(n - 1, m - 1))
                cout << "YES" << el;
            else
                cout << "NO" << el;
        }
        else
            cout << "NO" << el;
    }
}