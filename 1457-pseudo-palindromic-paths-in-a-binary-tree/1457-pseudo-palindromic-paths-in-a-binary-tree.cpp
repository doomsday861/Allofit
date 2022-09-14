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
    int pseudoPalindromicPaths (TreeNode* root, int mask =0) {
        if(!root) return 0;
        mask ^= 1 << (root->val);
        int res = pseudoPalindromicPaths(root->left,mask) + pseudoPalindromicPaths(root->right,mask);
        if(!root->left and !root->right)
        {
            if(__builtin_popcount(mask)<=1) res++;
        }
        return res;
    }
};