#include<bits/stdc++.h>
using namespace std;

char grid[100][100];
bool vis[100][100] = {false};

int di[] = {1,-1,0,0};
int dj[] = {0,0,1,-1};


void dfs(int row, int col,int n){
    if(row<0||col<0||row==n||col==n)return;
    if(grid[row][col]=='.'||vis[row][col])return;
    vis[row][col]=true;

    for(int i=0;i<4;i++){
        row += di[i], col += dj[i];
        dfs(row, col, n);
    }
}
int main()
{
    int t, T=0;
    cin>>t;
    while(t--){
        int n, cnt=0;
        cin>>n;
        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cin>>grid[i][j];
                }
            }
        for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    if(grid[i][j]=='x'){
                        cnt++;
                        dfs(i,j,n);
                    }
                ++T;
        cout<<"Case "<<T<<": "<<cnt<<endl;
    }
}
