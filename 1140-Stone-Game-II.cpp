class Solution {
public:
    int n;
    vector<int> prefix;
    vector<vector<int>> dp;
    int solve(int i, int m){
        if (m * 2 >= n - i) {
            return prefix[n] - prefix[i];
        }

        int &ret = dp[i][m];
        if (~ret) {
            return ret;
        }

        ret = 0;
        for (int x = 1; x <= 2 * m; ++x) {
            ret = max(ret, (prefix[n] - prefix[i]) - solve(i + x, max(x, m)));
        }
        return ret;
    }
    int stoneGameII(vector<int> &piles) {
       n = (int) piles.size();
        prefix = vector<int>(n + 1, 0);
        dp = vector<vector<int>>(n + 1, vector<int>(n + 1, -1));

        for (int i = 1; i <= n; ++i) {
            prefix[i] = prefix[i - 1] + piles[i - 1];
        }

        return solve(0, 1);
    }
};