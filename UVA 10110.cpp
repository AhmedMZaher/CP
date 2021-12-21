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
    long long n , sq;
    while(true){
        cin>>n;
        if(!n)
            return 0;
        sq = sqrt(n);
        string result = (sq * sq == n) ? "yes\n" : "no\n";
        cout<<result;
    }
    return 0;
}
