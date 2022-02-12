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

const int OO = (int) 1e5;	//Small -> WRONG, Large -> OVERFLOW
const int MAXN = 100000+1;

int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };

int row[] = {2, 2, -2, -2, 1, 1, -1, -1 };
int col[] = {-1, 1, 1, -1, 2, -2, 2, -2 };
const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 1e9+1;


int fact (int n){
    if(n==0 || n==1)
        return 1;

    else
        return n*fact(n-1);
}
bool is_overlapping(int x1,int x2,int y1,int y2){
    return max(x1,y1) <= min(x2,y2);
}

void solve()
{
    int p, q, l, r,a, b;
    cin>>p>>q>>l>>r;
    vi x, z;
    lp(i,p){cin >> a >> b ; lpi(j, a, b+1) z.pb(j);}
    lp(i,q){cin >> a >> b ; lpi(j, a, b+1) x.pb(j);}
    int cnt = 0;
    for(int i = l; i <= r ; i++)
    {
        bool flag = false;
        rep(j,z)
        {
            rep(k,x)
            {
                if(x[k] + i == z[j])
                {
                    cnt++;
                    flag = true;
                    break;
                }
            }
            if(flag)break;
        }
    }
    cout<<cnt;
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