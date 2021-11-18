//A. Word
//https://codeforces.com/contest/59/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cstdlib>
#include <cctype>
#include<string>
int main()
{
    int is_upper=0,is_lower=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i]))
            is_upper+=1;
        else
            is_lower+=1;
    }
    // convert string to uppercase
    if(is_upper>is_lower){
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                s[i]-=32;
            }
        }
    }
    // convert string to lowercase
    else{
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                s[i]+=32;
            }
        }
    }
    cout<<s;
    return 0;
}
