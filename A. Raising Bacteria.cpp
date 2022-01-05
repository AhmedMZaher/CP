#include<bits/stdc++.h>
using namespace std;



int main(){
    int n, ans = 0;
    cin>>n;
    while(n != 0)
    {
        if(n % 2) ans++;
        n /= 2 ;
    }
    cout<<ans;
    return 0;
}
