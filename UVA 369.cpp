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

long long a[101][101];

void solve(int i = 0, int last_value = 0)
{
    int n, m;
    a[1][1] = 1;
    a[1][0] = 1;

    for (int i = 2; i <= 100; i++) {
        a[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
}
int main() {
    int t = 1;
    //cin>>t;
    solve();
    int n,m;
    while(cin>>n>>m && (n||m) )
        cout<<a[n][m]<<el;
    return 0;
}
