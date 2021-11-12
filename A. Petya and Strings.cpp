#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
#include<string>
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int choice=0;
    for(int i=0;i<s1.size();i++){
        if(isupper(s1[i]))
            s1[i]+=32;
    }
    for(int i=0;i<s2.size();i++){
        if(isupper(s2[i]))
            s2[i]+=32;
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]<s2[i]){
            choice=-1;
            break;
        }
        else if(s1[i]>s2[i]){
            choice=1;
            break;
        }
    }
    cout<<choice;
  return 0;
}
