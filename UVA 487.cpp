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
#include <bits/stdc++.h>
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
typedef vector<vi> vvi;
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
const int N = 20;
const ll MOD = 1e9 + 7 ;

bool vis [20][20];
int n;
unordered_map <int, set<string>> ans;

void dfs(int x, int y, string cur, vector<vector<char>> &grid)
{
    for(int i = -1 ; i < 2 ; i++)
    {
        for (int j = -1; j < 2; ++j) {
            if(i == 0 && j == 0)
                continue;
            int di = x + i;
            int dj = y + j;
            if(di < 0 || dj < 0 || di >= n || dj >= n)
                continue;
            if(!vis[di][dj] && cur.back() < grid[di][dj])
            {
                cur += grid[di][dj];
                vis[di][dj] = true;
                if(sz(cur) > 2)
                    ans[sz(cur)].insert(cur);
                dfs(di, dj, cur, grid);
                vis[di][dj] = false;
                cur.pop_back();
            }
        }
    }
}

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t = 0;
    string str = "";
    cin>>t;
    while (t--)
    {
        cin>>n;
        clr(vis, 0);
        ans.clear();
        vector<vector<char>> grid(n, vector<char> (n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                str = "";
                str += grid[i][j];
                dfs(i, j, str, grid);
            }
        }
        n = n * n;
        for (int i = 3; i <= n; ++i) {
            for (auto a : ans[i])
                cout<<a<<el;
            ans[i].clear();
        }
        if(t)
            cout<<el;
    }
    return 0;
}