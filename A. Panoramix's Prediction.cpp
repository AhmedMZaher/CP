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
    int n, m, next;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++){
            bool is_prime = true;
        for(int j=2;j<i;j++){
            if(i % j == 0){
                is_prime=false;
                break;
            }
        }
        if(is_prime){
            next=i;
            break;
        }
    }
    if(m==next)cout<<"YES";
    else cout<<"NO";

}
