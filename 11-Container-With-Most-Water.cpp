class Solution {
public:
    int maxArea(vector<int>& height) {
        // The idea is to choose a vertical line and connect it to another
        // vertical line to its left.
        // If the length of the left line is greater than height[i] 
        // I will always choose the most left one or the right most one
        // because the answer will be min(left, height[i]) * distance = height[i] * distance
        // distance = (i - leftMost) OR (RightMost - i)
        

        int n = (int)height.size();
        vector<vector<int>> v(1e4 + 1);
        for(int i = 0; i < n; i++){
            v[height[i]].push_back(i);
        }

        int leftMost = INT_MAX, rightMost = INT_MIN;
        int ans = 0;
        for(int i = 1e4; i >= 0; i--){
            // for each line, connect either to the mostLeft or mostRight
            // such that this one is greater or equal you.
            sort(v[i].begin(), v[i].end());
            for(auto pos : v[i]){
                leftMost = min(leftMost, pos);
                rightMost = max(rightMost, pos);
            }

            for(auto pos : v[i]){
                if (leftMost != INT_MAX)
                    ans = max(ans, i * (pos - leftMost));
                if (rightMost != INT_MAX)
                    ans = max(ans, i * (rightMost - pos));
            }
        }
        
        return ans;
    }
};