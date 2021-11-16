//https://codeforces.com/problemset/problem/405/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}


/*
INPUT:
4
3 2 1 2
OUTPUT
1 2 2 3 
*/
