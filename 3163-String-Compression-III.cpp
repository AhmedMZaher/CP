class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int i = 0;
        string curr = "";
        while (i < word.size()) {
            if((int)curr.size() == 9 || (!curr.empty() && curr.back() != word[i])){
                ans += ((int)curr.size() + '0');
                ans += curr.back();
                curr = "";
            }
            curr += word[i];
            i++;
        }
        if (!curr.empty()) {
            ans += ((int)curr.size() + '0');
            ans += curr.back();
        }
        return ans;
    }
};