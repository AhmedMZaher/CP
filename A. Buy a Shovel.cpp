#include <iostream>
#include <limits>
using namespace std;
#include <cstdlib>
int main()

{
    int k,r,sum=0;
    cin>>k>>r;
    for(int i=1;i<=1000000;i++){
        if(((i*k)-r)%10==0){
            cout<<i;
            break;
        }
        else if((i*k)%10==0){
            cout<<i;
            break;
        }
    }
	return 0;
}
