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
const int N = 1001;
const int MOD = 1000003;


[[noreturn]] void solve() {
    int n, m, tot = 0;
    cin>>n>>m;
    int row[N]={0}, col[N]={0};
    char grid[n][m];
    lp(i, n)
    {
        lp(j, m)
        {
            cin>>grid[i][j];
            if(grid[i][j] == '*')
            {
                ++tot;
                ++row[i];
                ++col[j];
            }
        }
    }
    lp(i, n)
    {
        lp(j, m)
        {

            if(grid[i][j] == '*' && (row[i] + col[j] - 1 == tot ))
            {
                cout<<"YES"<<el;
                cout<<i + 1<<" "<<j + 1;
                return;
            }
            if(grid[i][j] == '.' && (row[i] + col[j] == tot))
            {
                cout<<"YES"<<el;
                cout<<i + 1<<" "<<j + 1;
                return;
            }
        }
    }
    cout<<"NO";
}





int main() {
    int t = 1;
   // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}