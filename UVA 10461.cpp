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

int sum_times = 0 ,num_of_jobs, num_of_dependencies ;

int get_mn(vvi before, int job, vi time) {
    int mn_time = -time[job];
    vector<bool> vis(num_of_jobs, false);
    queue<int> mn;

    mn.push(job);
    vis[job] = true;
    while (!mn.empty())
    {
        int cur = mn.front();
        mn.pop();
        mn_time += time[cur];
        rep(i,before[cur])
        {
            int next = before[cur][i];
            if(!vis[next])
            {
                mn.push(next);
                vis[next] = true;
            }
        }
    }
    return mn_time;
}

int get_mx(vvi after, int job, vi time) {
    int mx_time = sum_times;
    vector<bool> vis(num_of_jobs, false);
    queue<int> mx;
    mx.push(job);
    vis[job] = true;
    while (!mx.empty())
    {
        int cur = mx.front();
        mx.pop();
        mx_time -= time[cur];
        rep(i,after[cur])
        {
            int next = after[cur][i];
            if(!vis[next])
            {
                mx.push(next);
                vis[next] = true;
            }
        }
    }
    return mx_time;
}

int main() {
    int  queries,  caseNumber = 1;

    cin>>num_of_jobs>>num_of_dependencies;
    while(num_of_dependencies != 0 || num_of_jobs != 0)
    {
        sum_times = 0;
        vi time(num_of_jobs+1);
        vvi before(num_of_dependencies+1);
        vvi after(num_of_dependencies+1);
        lpi(i,1,num_of_jobs+1)
        {
            cin>>time[i];
            sum_times += time[i];
        }
        lpi(i,1,num_of_dependencies+1)
        {
            int x, y;
            cin>>x>>y;
            before[x].pb(y);
            after[y].pb(x);
        }


        cin>>queries;
        cout << "Case #" << caseNumber++ << ":" <<endl;
        while (queries--){
            int query_job;
            cin>>query_job;
            int res = get_mx(after, query_job, time) - get_mn(before, query_job, time);
            cout<<res<<el;
        }
        cout<<el;
        cin>>num_of_jobs>>num_of_dependencies;
    }
    return 0;
}