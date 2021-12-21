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
    int n;
    cin>>n;
    string str="";
    cin>>str;
    bool arr[200]={false};
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            arr[str[i]+32]=true;
        }
        else{
            arr[str[i]]=true;
        }
    }
    for(int i=97;i<=122;i++){
        if(arr[i]==false){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}
