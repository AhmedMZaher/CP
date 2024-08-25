/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void solve(TreeNode* current, vector<int> &ans){
        if(current->left)
            solve(current->left, ans);
        if(current->right)
            solve(current->right, ans);
        ans.push_back(current->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root)
            solve(root, ans);
        return ans;
    }
};