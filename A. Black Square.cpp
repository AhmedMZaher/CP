#include <iostream>
#include <limits>
using namespace std;
#include <cstdlib>
int main()
{
    int sum=0;
    int arr[4]; //frequency array
    string str;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    cin>>str;
    for(int i=0;i<str.size();i++){
        sum+=arr[((str[i]-48)-1)];
        //cout<<arr[str[i]-1]<<endl;
    }
    cout<<sum;
  return 0;
}
