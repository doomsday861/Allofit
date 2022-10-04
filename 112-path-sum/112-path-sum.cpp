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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        if(!root->left and !root->right)
        {
            if(targetSum-root->val == 0)
                return 1;
            return 0;
        }
        return (root->left and hasPathSum(root->left,targetSum-root->val)) or (root->right and hasPathSum(root->right, targetSum-root->val));
    }
};