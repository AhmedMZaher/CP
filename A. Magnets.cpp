#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
#include <cctype>
#include<string>
int main()
{
    // 10--> - +  = {1} in arr
    // 01--> +-  =  {0} in arr
    int n,j,counter=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        //cout<<"test"<<endl;
        cin>>j;
        if(j==10)
            arr[i]=1;
        else
            arr[i]=0;
    }
    //we stared with second magnet comparing it with first magnet, that's why i=1
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1])
            counter++;
    }
    cout<<counter+1;
    /*
    because if input is 6 10 10 10 01 10 10
    array is: 1 1 1 0 1 1 --> arr[3]!=arr[2] & arr[4]!=arr[3]
    so condition below is true twice, but we have 3 groups of magnets
    */
    return 0;
}
