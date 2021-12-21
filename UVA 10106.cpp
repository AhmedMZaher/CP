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
    string str1, str2;
    int n;
    while(true){
        cin>>str1>>str2;
         if (str1 == "0" || str2 == "0") {
          cout<<"0";
       }
        string r(str1.size() + str2.size(), 0);
        for(int i=str1.size()-1;i>=0;i--){
            for(int j=str2.size()-1;j>=0;j--){
                int n = (str1[i] - '0') * (str2[j] - '0') + r[i + j + 1];
                r[i + j + 1] = n % 10;
                r[i + j] += n / 10;
            }
        }
        for (int i = 0; i < r.size(); i++) {
          r[i] += '0';
       }
       if (r[0] == '0') {
          r = r.substr(1);
       }
       cout<<r<<endl;
    }
    return 0;
}
