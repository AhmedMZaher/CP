#include <iostream>
using namespace std;

int main(){

    int n,h,sum,height;
    cin>>n>>h;
    for(int i=1;i<=n;i++){
        cin>>height;
        if(height<=h)
            sum+=1;
        else
            sum+=2;
    }
cout<<endl<<sum;
}
