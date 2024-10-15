class Solution {
public:
    long long minimumSteps(string s) {
        // we want to move each zero after the last one
        // 1101000 -> 0111000
        // the cost to move this zero = number of ones on my left
        // solution is to iterate on each zero and sum number of zeros on its left

        int n = (int) s.size();
        long long ans = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += (s[i] == '1');
            ans += (s[i] == '0' ? cnt : 0);
        }
        return ans;
    }
};