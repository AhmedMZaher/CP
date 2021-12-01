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
    int y,w,a,b=6;
    cin>>y>>w;
    a=(6-max(y,w)+1);
    if(b%2==0){
        a/=2;
        b/=2;
    }
    if(b%3==0){
        a/=3;
        b/=3;
    }
    cout<<a<<"/"<<b;
	return 0;
}
