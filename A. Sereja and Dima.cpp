#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
#include <cctype>
#include<string>
int main()
{
    int n;
    cin>>n;
    int first=0,last=n-1,sereja=0,dima=0,mx;
    bool is_sereja=true;  // as Sereja state game
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(n){
        mx=0;
        if(arr[first]>arr[last]){ //this is if rightmost is max, and we shift rightmost to right by 1
            mx=arr[first];
            first++;
        }
        else{ //this is if leftmost is max, and we shift leftmost to left by 1
            mx=arr[last];
            last--;
        }
        if(is_sereja){
            sereja+=mx;
            is_sereja=false;
        }

        else{
            dima+=mx;
            is_sereja=true;
        }
        n-=1;
    }
    cout<<sereja<<" "<<dima;
    return 0;
}
