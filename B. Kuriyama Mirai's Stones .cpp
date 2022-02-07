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

typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef long long ll;
typedef long double ld;

const int OO = (int) 1e5;	//Small -> WRONG, Large -> OVERFLOW
const int MAXN = 100000+1;

const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 1e9+1;

void solve()
{
    long long int n, type, l, r, m;
    cin>>n;
    vector<long long int> v(n+1,0), a(n+1,0), b(n+1,0);
    lpi(i,1,n+1)
    {
        cin>>v[i];
        a[i] += a[i-1] + v[i];
    }
    //lpi(i,1,n+1)cout<<a[i]<<el;
    sort(all(v));
    lpi(i,1,n+1)
    {
        b[i] += b[i-1] + v[i];
    }
    cin>>m;
    lp(i,m)
    {
        cin>>type>>l>>r;
        if(type == 1)
        {
            cout<<a[r] - a[l-1]<<el;
        }
        else
        {
            cout<<b[r] - b[l-1]<<el;
        }
    }
}
int main() {
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
