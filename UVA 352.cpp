#include<bits/stdc++.h>
using namespace std;

bool vis[100][100] = {false};
char grid[100][100];
int di[8] = {0,0,1,-1,1,-1,1,-1};
int dj[8] = {1,-1,0,0,1,-1,-1,1};

void dfs(int row,int col, int n){
    if(row<0 || col<0 || row>=n || col>=n ||vis[row][col] ) return ;
    vis[row][col] = true;
    for(int i=0;i<7;i++){
        row += di[i], col += dj[i];
        if(grid[row][col] == '1')
            dfs(row, col, n);
    }
}
int main()
{
    int n, cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>grid[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if( !vis[i][j]&& grid[i][j]=='1'){
                dfs(i, j,n)
                cnt++;
            }
        }
    cout<<cnt;
}
