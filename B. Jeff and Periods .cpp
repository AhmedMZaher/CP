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
#define lpi(i, j, n)	    for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	    for(int i=(j);i>=(int)(n);--i)
#define repa(v)			    lpi(i, 0, sz(v)) lpi(j, 0, sz(v[i]))
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
#define pb					push_back
#define MP					make_pair
#define el                  endl
#define INF LONG_LONG_MAX

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;
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
const int N = 1e5 + 5;
const ll MOD = 1000000007 ;



void solve()
{
    int n;
    cin>>n;
    map <int, vector<int>> m;
    vector <pair<int, int>> p;
    lp(i, n)
    {
        int x;
        cin>>x;
        m[x].pb(i + 1);
    }
    for (auto f:m) {
        bool ok = 1;
        if(sz(f.second) ==  1)
        {
            p.pb(MP(f.first, 0));
            continue;
        }
        int delta = f.second[1] - f.second[0];
        lp(j, sz(f.second) - 1)
        {
            if(f.second[j + 1] - f.second[j] != delta){
                ok = 0;
                break;
            }
        }
        if(ok)
            p.pb(MP(f.first, delta));
    }
    if(!sz(p)){cout<<0;return;}
    cout<<sz(p)<<el;
    for (auto f:p) {
        cout<<f.first<<" "<<f.second<<el;
    }

}





int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}