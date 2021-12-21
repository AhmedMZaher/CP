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
    if(l % 2==0){
        for(long long i=l+2;i<=r;i++){
            if(__gcd(l,i)!=1 && __gcd(l+1,i)==1){
                cout<<l<<" "<<l+1<<" "<<i;
                return 0;
            }
        }
    }
    else{
        for(long long i=l+3;i<=r;i++){
            if(__gcd(l+1,i)!=1 && __gcd(l+2,i)==1){
                cout<<l+1<<" "<<l+2<<" "<<i;
                return 0;
            }
        }
    }
    cout<<-1;
}
