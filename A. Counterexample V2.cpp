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


int main(){

    long long l,r;
    cin>>l>>r;
    int R = r - l;
    if(l+1 == r){
        cout<<-1;
        return 0;
    }
    if(l % 2 != 0 && R > 2){
        cout<<l+1<<" "<<l+2<<" "<<l+3;
        return 0;
    }
    if( l % 2 == 0  && R > 1){
        cout<<l<<" "<<l+1<<" "<<l+2;
        return 0;
    }
    cout<<-1;
}
