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
#include <bits/stdc++.h>
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
const int MAXN = 100000+5;

const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 1e9+1;
void solve()
{
    int arr[MAXN];
    int m;
    string s;
    cin>>s;
    lpi(i,1,s.size()+1)
    {
        arr [i] = arr[i-1] +(s[i] == s[i-1]);
    }
    cin>>m;
    lp(j,m)
    {
        int r, l;
        cin>>l>>r;
        --l, --r;
        int ans = arr[r] - arr[l];
        cout<<ans<<el;
    }
}

int main() {
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
