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
    int n,b,d,sum=0,steps=0,a;
    cin>>n>>b>>d;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>b)
            continue;
        sum+=a;
        if(sum>d){
            steps++;
            sum=0;
        }
    }
    cout<<steps;
	return 0;
}
