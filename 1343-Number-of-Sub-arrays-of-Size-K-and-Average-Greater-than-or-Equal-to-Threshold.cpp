class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0, cnt = 0;
        for(int i = 0; i < k; i++)
            sum += arr[i];

        
        cnt += ((sum / k) >= threshold);
        for(int i = k; i < (int)arr.size(); i++){
            sum -= arr[i - k];
            sum += arr[i];
            cnt += ((sum / k) >= threshold);
        }
        return cnt;
    }
};