class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = (int) temperatures.size();
        vector<int> ans(n, 0);
        stack<int> s; // it stores the indices
        for(int i = 0; i < n; i++){
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
                ans[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};