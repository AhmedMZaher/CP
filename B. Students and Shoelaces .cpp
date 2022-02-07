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
#define lpi(i, j, n)	    for(ll i=(j);i<(int)(n);++i)
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
const int MAXN = 100000+1;

int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };

int row[] = {2, 2, -2, -2, 1, 1, -1, -1 };
int col[] = {-1, 1, 1, -1, 2, -2, 2, -2 };
const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 1e9+1;

int deg[111];
int adj[111][111];
void solve()
{
    int n, m, res = 0;
    cin>>n>>m;
    lp(i,m)
    {
        int x, y;
        cin>>x>>y;
        --x, --y;
        adj[x][y] =adj[y][x]= 1;
        deg[x]++;
        deg[y]++;
    }
    while(true)
    {
        vi v;
        lp(i,n) if(deg[i] == 1) v.pb(i);
        if(!sz(v))break;
        rep(i,v)
        {
            rep(i, v)deg[v[i]] = 0;
            lp(j,n)
            {
                if (adj[v[i]][j])
                {
                    adj[v[i]][j] = adj[j][v[i]] = 0 ;
                    deg[j]--;
                }
            }
        }
        res++;
    }
    cout<<res<<el;
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