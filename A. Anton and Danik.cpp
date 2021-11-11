#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int n,anton=0,danik=0;
    char ch;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ch;
        if(ch=='A')
            anton++;
        else
            danik++;
    }
    if(anton>danik)
        cout<<"Anton";
    else if(danik>anton)
        cout<<"Danik";
    else
        cout<<"Friendship";
  return 0;
}
