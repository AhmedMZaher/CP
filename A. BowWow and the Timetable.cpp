/*
 * Another buggy code by mostafa_saad
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


int main() {


	string str;

	while (cin >> str) {
		int last1 = -1, cnt1s = 0;

		rep(i, str)
		{
			if (str[i] == '1')
			{
				if (last1 == -1)
					last1 = i;
				cnt1s += 1;
			}
		}

		if (cnt1s == 0)
		{
			cout<<0<<"\n";
			continue;
		}
		last1 = sz(str) - last1 - 1;

		if (last1 % 2 == 1)
			last1 += 1, cnt1s = 0;	// upgrade

		last1 = last1 / 2;

		if (cnt1s > 1)
			last1 += 1;

		cout<<last1<<"\n";

		break;
	}

	return 0;
}
