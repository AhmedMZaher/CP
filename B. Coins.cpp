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
#define el                  endl

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
    int a = 0 , b = 0 , c = 0;
    string s;
    lp(i,3)
    {
        cin>>s;
        if(s[1] == '>')
        {
            if(s[0] == 'A')a++;
            else if (s[0] == 'B')b++;
            else c++;
        }
        else
        {
            if(s[2] == 'A')a++;
            else if (s[2] == 'B')b++;
            else c++;
        }
    }
    if(a == b && b == c)
    {
        cout<<"Impossible";
        return 0;
    }
    else
    {
        if(a > b && a > c && b > c)s="ABC";
        else if(a > b && a > c && c > b)s="ACB";
        else if(b > c && b > a && c > a)s="BCA";
        else if(b > c && b > a && a > c)s="BAC";
        else if(c > a && c > b && a > b)s="CAB";
        else s="CBA";
    }
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}
