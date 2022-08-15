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
    int l,r;
    int f;
    int counter(TreeNode* root)
    {
        if(!root)
            return 0;
        int lh = counter(root->left);
        int rh = counter(root->right);
        if(root->val == f)
        {
            l = lh;
            r = rh;
        }
        return 1 + lh+rh;
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        f = x;
        int rem = counter(root);
        if((l+r)<(n/2) or l>(n/2) or r>(n/2))
        return 1;
        else
            return 0;
    }
};