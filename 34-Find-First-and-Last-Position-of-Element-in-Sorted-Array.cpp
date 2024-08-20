class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> pos;
        
        int l = 0, r = (int)nums.size() - 1, ans = -1;
        while(l <= r){
            int mid = (l + r) / 2;
            if(nums[mid] == target){
                ans = mid;
                r = mid - 1;
            } 
            else if(nums[mid] < target)
                l = mid + 1; 
            else
                r = mid - 1;
        }
        pos.push_back(ans);

        l = 0, r = (int)nums.size() - 1, ans = -1;
        while(l <= r){
            int mid = (l + r) / 2;
            if(nums[mid] == target){
                ans = mid;
                l = mid + 1;
            } 
            else if(nums[mid] < target)
                l = mid + 1; 
            else
                r = mid - 1;
        }
        pos.push_back(ans);
        return pos;
    }
};