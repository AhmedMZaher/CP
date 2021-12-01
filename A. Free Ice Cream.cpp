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
    long long n,x,diss=0,num;
    char ch;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>ch>>num;
        if(ch=='+'){
            x+=num;
        }
        else{
            if(num<=x){
                x-=num;
            }
            else
                diss++;
        }
    }
    cout<<x<<" "<<diss;
    return 0;
}
