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
    int n, sum=0;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        if(str == "Tetrahedron") sum+=4;
        else if (str == "Cube") sum+=6;
        else if (str == "Octahedron") sum+=8;
        else if (str == "Dodecahedron") sum+=12;
        else sum+=20;
    }
    cout<<sum;
}
