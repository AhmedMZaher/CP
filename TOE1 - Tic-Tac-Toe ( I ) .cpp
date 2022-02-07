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

int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 1e9+1;

bool is_win(string config) {

    bool rows =
            (config[0] != '.' && config[0] == config[1] && config[1] == config[2]) ||
            (config[3] != '.' && config[3] == config[4] && config[4] == config[5]) ||
            (config[6] != '.' && config[6] == config[7] && config[7] == config[8]);

    bool columns =
            (config[0] != '.' && config[0] == config[3] && config[3] == config[6]) ||
            (config[1] != '.' && config[1] == config[4] && config[4] == config[7]) ||
            (config[2] != '.' && config[2] == config[5] && config[5] == config[8]);

    bool diagonals =
            (config[0] != '.' && config[0] == config[4] && config[4] == config[8]) ||
            (config[2] != '.' && config[2] == config[4] && config[4] == config[6]);

    return rows || columns || diagonals;
}


void solve()
{
    string board;
    lp(i,3)
    {
        string  row;
        cin>>row;
        board += row;
    }
    string ans = "no";
    string start = ".........";
    queue<pair<string ,bool>> p;
    p.push({start,1});
    while (sz(p))
    {
        string cur = p.front().first;
        bool pl = p.front().second;
        p.pop();
        if(cur == board)
        {
            ans = "yes";
            break;
        }
        if(is_win(cur)) continue;
        lp(i,9)
        {
            if(cur[i] == '.')
            {
                cur[i] = (pl ? 'X' : 'O');
                if(cur[i] == board[i])
                    p.push({cur, !pl});
                cur[i] ='.';
            }
        }
    }
    cout<<ans<<el;
}

int main() {
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}