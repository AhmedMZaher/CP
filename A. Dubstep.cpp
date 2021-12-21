#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main()
{
    bool flag = false;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
	    if(str[i]=='W'&& str[i+1]=='U' && str[i+2]=='B'){
	        i+=2;
	        if(flag){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        flag=1;
	        cout<<str[i];
	    }
	}
}
