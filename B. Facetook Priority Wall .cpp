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
const int N = 100010;
const int MOD = 1000003;




void solve()
{
    string myName;
    cin >> myName;
    int n;
    cin >> n;
    map<string, int> factor;
    string name1, action, temp, name2;
    for (int i = 0; i < n; i++) {
        cin >> name1;
        cin >> action;
        if (action == "posted" || action == "commented")
            cin >> temp;
        cin >> name2;
        name2 = name2.substr(0, name2.length() - 2);
        cin >> temp;
        int val = 5;
        if (action == "posted")
            val = 15;
        else if (action == "commented")
            val = 10;
        if (name1 == myName)
            factor[name2] += val;
        else
            factor[name1];
        if (name2 == myName)
            factor[name1] += val;
        else
            factor[name2];
    }
    vector<pair<int, string> > ret;
    for (map<string, int>::iterator it = factor.begin(); it != factor.end(); it++)
        ret.push_back(make_pair(-it->second, it->first));
    sort(ret.begin(), ret.end());
    int m = ret.size();
    for (int i = 0; i < m; i++)
        cout << ret[i].second << endl;
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