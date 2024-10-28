class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n = (nums.size());
        sort(nums.begin(), nums.end());
        vector<int> dp(1e5 + 1, -1);

        for(int i = 0; i < (int)nums.size(); i++){
            dp[nums[i]] = 1;
        }
        for(int i = 0; i < (int)nums.size(); i++){
            int x = nums[i];
            if(x * (long long)x > 1e5)continue;
            if(dp[x * x] != -1){
                dp[x * x] = dp[x] + 1;
            }
        }
        int ans = 0;
        for(int i = 1; i <= 1e5; i++){
            ans = max(ans, dp[i]);
        }
        return (ans == 1 ? -1 : ans);
    }
};