#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;
    if(a.size() == b.size() && a == b)
        cout<<"-1";
    else if(a.size() > b.size())
        cout<<a.size();
    else
        cout<<b.size();
    return 0;
}
