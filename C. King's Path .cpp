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


void solve()
{
    std::ios_base::sync_with_stdio(false);
    set <pair<int,int>> pts;
    int x1, y1, x2, y2, n;
    cin>>x1>>y1>>x2>>y2>>n;
    lp(i,n)
    {
        int r, a, b;
        cin>>r>>a>>b;
        lpi(j,a,b+1)
            pts.insert({r,j});
    }
    int dep = 0, sz = 1;
    queue<pair<int,int>> q;
    map<pair<int, int>, int> len;
    pair<int, int> cur;
    pair <int, int> p = {x1, y1};
    q.push(p);
    len[p] = 0;
    for(; !q.empty(); ++dep,  sz = sz(q))
    {
        while (sz--)
        {
            cur = q.front(), q.pop();
            for(int i = 0; i<8; i++)
            {
                int d1 = cur.first + dx[i];
                int d2 = cur.second + dy[i];
                pair <int, int > newp = {d1, d2};
                if(!pts.count(newp) || len.count(newp) !=0) continue;
                q.push(newp);
                len[newp] = dep + 1;
                if(newp.first == x2 && newp.second == y2)
                {
                    cout<<dep + 1 ;
                    return;
                }
            }
        }
    }
    cout<<-1;
}

int main() {
    int t = 1;
    //cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}