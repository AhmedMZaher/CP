#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main()
{
    // initially first = 1, cuz we take it input outside loop
    int n, first=1, second=0;
    string s, first_input, second_input;
    cin>>n;
    cin>>first_input;
    // loop from 0 to n-1 no n
    for(int i=0;i<n-1;i++){
        cin>>s;
        if( s == first_input) first++;
        else{
            second_input = s;
            second++;
        }
    }
    if(first>second) cout<<first_input;
    else cout<<second_input;
}
