#include <algorithm>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <unistd.h>
#include <cstring>
using namespace std;
int main()

{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    // to get time that second oven can do its first bake
    int built =d+t;
    // how many cakes does first oven do until second oven finished its first bake
    int one_bake=(built/t)*k;
    // if first oven already baked required cakes or more, so no need for second oven
    if(one_bake>=n)
        cout<<"NO";
    else
        cout<<"YES";
	return 0;
}
