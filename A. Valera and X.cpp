#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    int n, flag = 0;
    char grid[300][300];
    char x, y;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    x = grid[n/2][n/2];
    y = grid[0][1];

    for(int i = 0; i < n; i++){
        if(grid[i][i] != x || grid[i][n-(i+1)] != x || grid[i][i] == y || grid[i][n-(i+1)] == y  ){
                flag = 1;
                break;
        }
        for(int j = 0; j < n; j++){
            if(i != j && j != (n - (i + 1)))
            {
                if(grid[i][j] != y){
                    flag = 1;
                    break;
                }
            }
        }
    }

    if(flag == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
