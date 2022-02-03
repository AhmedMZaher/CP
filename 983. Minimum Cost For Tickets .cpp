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
const int MAXN = 100000+5;

const double PI = acos(-1.0);
const double EPS = (1e-7);
const int N = 1e9+1;

int solve(vector<int>& days, vector<int>& costs) {
   bool isTravel[366];
   lp(i,367) isTravel[i]= false;
   rep(i,days){
       int day = days[i];
       isTravel[day] = true;
   }
   int dp [366];
   dp[0]=0;
   for (int i = 1; i < 366; i++) {
        if (!isTravel[i]) {
            dp[i] = dp[i - 1];
            continue;
        }
        dp[i] = INT16_MAX;
        dp[i] = min(dp[i], dp[max(0, i - 1)] + costs[0]);
        dp[i] = min(dp[i], dp[max(0, i - 7)] + costs[1]);
        dp[i] = min(dp[i], dp[max(0, i - 30)] + costs[2]);
    }
    return dp[365];
}

int main() {
    int t = 1;
    //cin>>t;
    //while(t--)
    vi days = {1,2,3,4,5,6,7,8,9,10,30,31};
    vi costs = {2,7,15};
    cout<<solve(days, costs);
    return 0;
}
