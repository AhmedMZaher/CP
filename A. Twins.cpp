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
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./", in, result="";
    char sy;
    cin>>sy;
    cin>>in;
    if(sy=='R'){
        for(int i=0; i<in.size();i++){
            for(int j=0;j<s1.size();j++){
                    if(in[i]==s1[j])
                        result+=s1[j-1];
            }
        }
    }
    else{
        for(int i=0; i<in.size();i++){
            for(int j=0;j<s1.size();j++){
                    if(in[i]==s1[j])
                        result+=s1[j+1];
            }
        }
    }
    cout<<result;
    return 0;
}
