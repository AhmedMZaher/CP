#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
#include <cctype>
#include<string>
int main()
{
    int n,t,j,counter=1;
    cin>>n;
    cin>>t;
    for(int i=1;i<n;i++){
        //cout<<"test"<<endl;
        cin>>j;
        if(t!=j)counter++;
        t=j
    }
    cout<<counter;
    return 0;
}
