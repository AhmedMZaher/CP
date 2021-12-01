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
    int n,k,diss=0;
    string pass="";
    char lett='a';
    cin>>n>>k;
    for(int i=0;i<n;i++){
        if(diss==k){
            lett='a';
            diss=0;
        }
        pass += lett;
        diss++;
        lett++;
    }
    cout<<pass;
    return 0;
}

