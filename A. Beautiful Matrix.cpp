#include <iostream>
#include <limits>
using namespace std;
#include <cstdlib>
int main()
{
    int arr[5][5];
    int row=0,col=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                row=i;
                col=j;
            }
        }
    }
    int steps=(abs(2-row))+(abs(2-col));
    cout<<steps;
  return 0;
}
