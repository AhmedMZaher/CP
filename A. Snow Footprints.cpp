#include<bits/stdc++.h>
using namespace std;



int main(){
    int n, fst, lst;
    cin>>n;
    string str;
    cin>>str;
    for(int i = 0 ; i < n ; i++)
    {
        if(str[i] != '.')
        {
            fst = i;
            break;
        }
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(str[i] != '.')
        {
            lst = i;
            break;
        }
    }
    if (str[fst] == 'R' && str[lst] == 'R')
    {
        cout<<fst+1<<" "<<lst+1+1;
    }
    else if (str[fst] == 'L' && str[lst] == 'L')
    {
        cout<<lst+1<<" "<<fst-1+1;
    }
    else if(str[fst] == 'R' && str[lst] == 'L')
    {
        for(int i = fst ; i < n ; i++)
        {
            lst = i;
            if(str[i] =='L') break;
        }
        cout<<fst+1<<" "<<lst-1+1;
    }
    return 0;
}
