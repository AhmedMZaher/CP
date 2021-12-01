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
    int n,m,x,y;
    cin>>n;
    int arr[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        if(x>1)
            arr[x-1]+= y - 1; //shift up
        if(x<n)
            arr[x+1]+=arr[x] - y; //shift down
        arr[x]=0; // birds on this wire gonna be 0, cuz they will move
    }
    for(int i=1;i<=n;i++){ // we print just from wire 1 to wire n
        cout<<arr[i]<<endl;
    }
	return 0;
}
