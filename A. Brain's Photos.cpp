#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main()
{
    int n, m;
    char ch;
    cin>>n>>m;
    for(int i=0; i <n*m;i++){
        cin>>ch;
        if(ch == 'Y' || ch == 'M' || ch == 'C'){
            cout<<"#Color";
            return 0;
        }
    }
    cout<<"#Black&White";
}
