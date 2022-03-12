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
#define INF LONG_LONG_MAX

typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef long long ll;
typedef unsigned long long ull;
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
const int N = 1005;
const int MOD = 1000003;

map <int, int> fr, bk, same, freq;
void solve()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n ; ++i) {
        int x, y;
        cin>>x>>y;
        fr[x]++;
        bk[y]++;
        freq[x]++;
        freq[y]++;
        if(x == y)
            same[x]++;
    }
    map<int, int> :: iterator it;
    int m = (n + 1) / 2;
    for(it = fr.begin() ; it != fr.end() ; it++)
    {
        if(it->second >=m)
        {
            cout<<0;
            return;
        }
    }
    int ans = INT_MAX;
    for(it = freq.begin() ; it != freq.end() ; it++)
    {
        int color = it->first;
        int a = fr[color];
        int b = bk[color];
        int need = m - a;
        int has = b - same[color];
        if(has >= need)
            ans = min(ans, need);
    }
    if(ans == INT_MAX)
        cout<<-1;
    else
        cout<<ans;
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