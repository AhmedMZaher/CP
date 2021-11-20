#include <iostream>
#include <limits>
using namespace std;
#include <cstdlib>
int main()

{
    int n,counter=0;
    cin>>n;
    /*
    we will create 1-based array to store teams uniforms
    odd index refer to home color
    even index refer to away color
    */
    int arr[(n*2)+1];  // we deal with 1-based array
    for(int i=1;i<=n*2;i++){ // (n*2) cuz we will 2 colors for each team (home and away)
        cin>>arr[i];
    }
    for(int i=1;i<=(n*2)-1;i+=2){//array to loop on home colors{
        for(int j=2;j<=(n*2);j+=2){//array to loop on away colors{
            if(arr[i]==arr[j])
                counter++;
        }
    }
    cout<<counter;
	return 0;
}
