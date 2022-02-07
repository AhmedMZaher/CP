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
const int n = 8;

int len[10][10];
int sc, sv, ec, ev;
void init()
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <=n ; j++)len[i][j]=INF;
    }
}

void dfs(int a, int b, int dep = 0)
{
    if (a<1 || a>n || b<1 || b>n) return;
    if(len[a][b] <= dep)return;
    len[a][b]=dep;
    for(int i = 0; i <= 7; i++)
    {
        int x = a + row[i], y = b + col[i];
        dfs(x,y,dep+1);
    }
}

int main() {
    //int t = 1;
    //cin>>t;
    char s[10];
    while(gets(s))
    {
        init();
        sc = s[0]-96; sv = s[1]-48;
        ec = s[3]-96; ev = s[4]-48;
        dfs(sc,sv,0);
        printf("To get from %c%d to %c%d takes %d knight moves.\n",sc+96,sv,ec+96,ev,len[ec][ev]);
    }
    return 0;
}