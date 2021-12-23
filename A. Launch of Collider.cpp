#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, res=2e9;
    string s;
    cin>>n>>s;
    int dis[n];
    for(int i=0;i<n; i++) cin>>dis[i];

    for(int i=0;i<n-1; i++){
        if(s[i] =='R' && s[i+1] == 'L')
            res = min(res, (dis[i + 1] - dis[i]) / 2);
    }
    if(res == 2e9)cout<<-1;
    else cout<<res;
	return 0;
}
