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
    int cnt=0,arr[200]={0};
    string str;
    getline(cin, str);
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
            arr[(int) str[i]]++;
    }
    for(int i=0;i<200;i++){
        //cout<<i<<"  "<<arr[i]<<endl;
        if(arr[i]!=0)
            cnt++;
    }
    cout<<cnt;
}

