#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, k, covered=0;
    cin>>n>>k;
    for(int i = 0 ; i < n ; i++)
    {
        int s,e;
        cin>>s>>e;
        covered += (e-s+1);
    }
    covered = (k-(covered%k ))%k;
    cout<<covered;
	return 0;
}
