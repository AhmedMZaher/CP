#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
    char grid[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)
            cin>>grid[i][j];
    }
    for(int i=1; i<4; i++){
        for(int j=0; j<3; j++){
            int black=0;
            if(grid[i][j]=='#') black++;
            if(grid[i-1][j]=='#') black++;
            if(grid[i-1][j+1]=='#') black++;
            if(grid[i][j+1]=='#') black++;
            //cout<<i<<" "<<j<<black<<endl;
            if(black != 2){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
	return 0;
}
