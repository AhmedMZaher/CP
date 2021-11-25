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
    string s,t;
    int i=0,j=0,curr=1;
    cin>>s>>t;
    while(j<t.size()){
        if(s[i]==t[j]){
            curr++;
            i++;
        }
            j++; // THIS MUSSSSSSSSSSST BE INSIDE ELSE STATMESNT
        }
    cout<<curr;
	return 0;
}
