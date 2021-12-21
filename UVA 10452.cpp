#include <iostream>
#include <string>

using namespace std;

string grid[9];
int m, n,row, col, new_row, new_col;
string needed="IEHOVA#";
int col_dir[]={-1, 0, 1};
int row_dir[]={0, -1, 0};
string dirs[]={"left", "forth","right"};
string result[7];

bool dfs(int row, int col, int idx){
    if(grid[new_row][new_col]=='#'){
        cout<<result[0];
        for(int i=1;i<7;i++){
            cout<<" "<<result[i];
        }
    }
    for(int moves=0;moves<3;moves++){
        new_row = row + row_dir[moves], new_col = col + col_dir[moves];
        if(new_row >= 0 && new_col >= 0 && new_row<=m && new_col <=n && grid[new_row][new_col] == needed[idx]){
            row=new_row, col=new_col;
            result[idx] = dirs[moves];
            dfs(new_row, new_col ,idx+1);
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        for(int i=0;i<m;i++){
            cin>>grid[i];
            for(int j=0;j<n;j++){
                if(grid[i][j]=='@'){
                    row=i;
                    col=j;
                }
            }
        }
        dfs(row, col, 0);
    }

}
