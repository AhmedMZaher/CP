#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int x[5], y[5];
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)x[i % 5 ]++;
    for(int i=1; i<=m; i++)y[i % 5 ]++;
    long long sum = (long long) x[0] * y[0];
    for(int i=1; i<5; i++){
        sum += (long long) x[i] * y[5 - i];
    }
    cout<<sum;

	return 0;
}
