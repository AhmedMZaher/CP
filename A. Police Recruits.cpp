#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
#include <cctype>
#include<string>
int main()
{
    int n,crimes=0,freemans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=-1)
            freemans+=arr[i];
        else if(arr[i]<=0 && freemans==0)
            crimes++;
        else
            freemans--;
    }
    cout<<crimes;
    return 0;
}
