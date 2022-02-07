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

int n, m, q, b[200], e[200], x, ans;
char a[200][200];
string s;

void solve()
{
    cin>>n>>m>>x;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin>>a[i][j];
            e[a[i][j] - 'a'] = 1;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            for(int l = 1; l <= n; l++)
            {
                for(int k = 1; k <= m; k++)
                {
                    if( (l - i ) * (l - i) + (k - j) * (k - j) <= x * x && a[l][k] == 'S') b[a[i][j] - 'a'] = 2;
                    else if (a[l][k] == 'S' && !b[a[i][j] - 'a']) b[a[i][j] - 'a'] = 1;
                }
            }
        }
    }
    cin>>q>>s;
    int ans = 0;
    lp(i,q)
    {
        if(s[i] <= 'z' && s[i] >= 'a' && !e[s[i] - 'a'])
        {
            cout<<-1;
            return;
        }
        if(s[i] <= 'Z' && s[i] >= 'A')
        {
            if(b[s[i] - 'A'] == 0)
            {
                cout<<-1;
                return;
            }
            if(b[s[i] - 'A'] ==  1) ans++;
        }
    }
    cout<<ans;
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
