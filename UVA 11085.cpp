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

int a[10][10];
bool row[15], dig1[15], dig2[15];
int ans;
int v;

void solve(int c, int cur, vector<int>& board)
{
    if(c == 8)
    {
        ans = min(ans, cur);
        return;
    }


    for (int r = 0; r < 8; ++r) {
        if(row[r] || dig1[r + c] || dig2[r - c + 8])continue;
        row[r] = dig1[r + c] = dig2[r - c + 8] = true;
        solve(c + 1, cur + (r == board[c] ? 0 : 1), board);
        row[r] = dig1[r + c] = dig2[r - c + 8] = false;

    }
}

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int tc = 1;
    //cin>>t;
    while(cin>>v)
    {
        clr(a, 0);
        clr(row, 0);
        clr(dig1, 0);
        clr(dig2, 0);
        vector<int> board(1,v-1);
        ans = INT_MAX;
        for(int j=1;j<8;j++){
            cin >> v;
            board.pb(v-1);
        }
        solve(0, 0, board);
        cout<<"Case "<<tc++<<": "<<ans<<endl;
    }
    return 0;
}