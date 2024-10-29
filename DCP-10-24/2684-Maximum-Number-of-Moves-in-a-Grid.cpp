class Solution {
public:
    bool valid(vector<vector<int>>& grid, int i, int j) {
        return i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size();
    }
    int solve(vector<vector<int>>& grid, vector<vector<int>>& dp, int i,
              int j) {
        int& ret = dp[i][j];
        if (~ret)
            return ret;

        ret = 0;
        if (valid(grid, i - 1, j + 1) && grid[i - 1][j + 1] > grid[i][j])
            ret = max(ret, solve(grid, dp, i - 1, j + 1) + 1);

        if (valid(grid, i, j + 1) && grid[i][j + 1] > grid[i][j])
            ret = max(ret, solve(grid, dp, i, j + 1) + 1);

        if (valid(grid, i + 1, j + 1) && grid[i + 1][j + 1] > grid[i][j])
            ret = max(ret, solve(grid, dp, i + 1, j + 1) + 1);
        return ret;
    }
    int maxMoves(vector<vector<int>>& grid) {
        int n = (int)grid.size(), m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, solve(grid, dp, i, 0));
        }
        return ans;
    }
};