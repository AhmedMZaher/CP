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
typedef pair<int, int> PII;

const int OO = (int) 1e5;	//Small -> WRONG, Large -> OVERFLOW
const int MAXN = 100000+1;

const int di_8[] = { -1, -1, -1,  1, 1, 1,  0, 0 };// 8 shifts to neighbors
const int dj_8[] = { -1,  0,  1, -1, 0, 1, -1, 1 };// used in functions
const int di_4[] = { 1, -1, 0,  0};// 4 shifts to neighbors
const int dj_4[] = { 0,  0,  1, -1};
const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 1e9+1;


int n, m, k, q;
string out[4] = {"Carrots","Kiwis", "Grapes", "Waste"};
PII w[MAXN];

int solve(int x, int y)
{
    PII p = make_pair(x,y);
    int past = 0;
    lp(i, k)
    {
        if(w[i] == p) return 3;
        if(w[i] < p) past++;
    }
    int num = ((x-1) * m + y - 1);
    return (num - past) % 3;
}
int main() {
    int t = 1;
    //cin>>t;
    while(t--)
    {
        cin>>n>>m>>k>>q;
        lp(i, k)
            cin>>w[i].first>>w[i].second;
        lp(i, q)
        {
            int x, y;
            cin>>x>>y;
            cout<<out[solve(x, y)]<<el;
        }
    }
    return 0;
}
