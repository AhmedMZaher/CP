#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if (i == 0 && s[i] == '9') continue;
        if(s[i] - '0' > 9 - (s[i] - '0'))
            s[i] = '0' + (9 - (s[i] - '0'));
    }
    cout<<s;
	return 0;
}
