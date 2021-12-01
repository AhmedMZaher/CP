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
    string arr[1000]={};
    int cnt=0;
    string s;
    cin>>s;
    int sz=ceil((float)s.size()/2);
    //cout<<sz;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            cnt++;
            continue;
        }
        arr[cnt]+=s[i];
    }
    sort(arr, arr+sz);
    cout<<arr[0];
    for(int i=0;i<sz;i++){
        if(i==sz-1){
           cout<<arr[i];
           break;
        }
        cout<<arr[i]<<"+";
    }
    return 0;
}
