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
    bool ranger(TreeNode* root, long long minrange,long long maxrange)
    {
        if(!root)
            return 1;
        if(root->val < minrange || root->val > maxrange)
            return 0;
    return (root->val > minrange && root->val < maxrange) && ranger(root->left,minrange, root->val) && ranger(root->right, root->val, maxrange);
    }
    bool isValidBST(TreeNode* root) {
        if(!root)
            return 1;
        
        return ranger(root,LLONG_MIN,LLONG_MAX);
    }
};