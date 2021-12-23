#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t, left="", right="";
    cin>>s>>t;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '|'){
            for(int l=0; l<i; l++) left += s[l];
            for(int r=i+1; r<s.size(); r++) right += s[r];
            break;
        }
    }

    for(int i=0; i<t.size(); i++){
        if(left.size() > right.size()) right += t[i];
        else left += t[i];
    }
    if (left.size() != right.size())
		cout << "Impossible\n";
	else
		cout << left << '|' << right << endl;
	return 0;
}
