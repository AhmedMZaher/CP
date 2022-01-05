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


int main() {
    int n, s;
    bool flag = true;
    cin>>n;
    int arr[n];
    lp(i, n)
    {
        cin>>s;
        if(s % 2 == 0)arr[i] = s / 2;
        else if (s % 2)
        {
            if(flag)
            {
                arr[i] = ceil(s/2.0);
                flag = false;
            }
            else
            {
                arr[i] = floor(s/2.0);
                flag = true;
            }
        }
    }
    lp(i, n) cout<<arr[i]<<endl;
	return 0;
}
