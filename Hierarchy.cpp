/*
topological sort
solved by me

https://www.spoj.com/problems/MAKETREE/
*/
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
#define lp(i, n)		    for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	    for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	    for(int i=(j);i>=(int)(n);--i)
#define repa(v)			    lpi(i, 0, sz(v)) lpi(j, 0, sz(v[i]))
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
#define pb					push_back
#define MP					make_pair

typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef long long ll;
typedef long double ld;

const int OO = (int) 1e8;	//Small -> WRONG, Large -> OVERFLOW

const double PI = acos(-1.0);
const double EPS = (1e-7);


int n, k, wishes, a;
vector<vector <int> > adj;
vi res;
int parent[10077];
bool visited[100077] = {false};


void topo_sort(int node)
{
    visited[node] = true;
    rep(i, adj[node])
    {
        int child = adj[node][i];
        if(!visited[child])
            topo_sort(child);
    }
    res.push_back(node);
}
int main() {

    cin>>n>>k;
    adj.resize(n+1);
    for(int i =  1 ; i <=k ; i++)
    {
        cin>>wishes;
        for(int j = 0 ; j < wishes ; j++)
        {
            cin>>a;
            adj[i].push_back(a);

        }
    }
    for(int i = 1; i<=n; i++)
    {
        if(!visited[i])
            topo_sort(i);
    }
    int idx = 0;
	for (int i = n - 1; i >= 0; i--) {
		int n = res[i];
		parent[n] = idx;
		idx = n;
	}
    lpi(i, 1, n+1)
    {
        cout<<parent[i]<<endl;
    }
	return 0;
}
