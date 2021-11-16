#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
#include<string>
int main()
{
    string s;
    int counter=0;
    int arr[27]={0};
    cin>>s;
    for(int i=0;i<s.size();i++){
       arr[(s[i]-97)]++;
    }
    for(int i=0;i<27;i++){
        if(arr[i]!=0) //because we will increase counter if letter shown one or two times
            counter++;
    }
    if(counter%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
  return 0;
}
