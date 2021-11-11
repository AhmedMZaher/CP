#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int n,counter=0,total=0;
    bool k;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            cin>>k;
            if(k){
               counter++;
            }

        }
        if(counter>=2)
            total++;
        counter=0;
    }
    cout<<total;
  return 0;
}
