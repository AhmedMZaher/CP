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
    int n, m, c, result;
    while(cin>>n>>m>>c){
    if(n==0 && m==0 && c==0)
        return 0;
    result=floor(((n - 7 ) * (m - 7 ) + c) / 2 );
    cout<<result;
    }
    return 0;
}
