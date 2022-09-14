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
    int cnt =0;
    void solve(TreeNode* root, int mask)
    {
        if(!root) return;
        if(!root->left and !root->right)
        {
            mask ^= 1<<(root->val);
            if(__builtin_popcount(mask)<=1)cnt++;
            return;
        }
        mask ^= 1<<(root->val);
        solve(root->left,mask);
        solve(root->right,mask);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int mask =0;
        solve(root,mask);
        return cnt;
    }
};