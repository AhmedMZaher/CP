#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int a,b,counter=0;
    cin>>a>>b;
    while(true){
        a*=3;
        b*=2;
        counter++;
        if(a>b)
            break;
    }
    cout<<counter;
  return 0;
}
