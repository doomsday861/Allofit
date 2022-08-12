/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode* cur = root;
        if(p->val > q->val)
        {
            TreeNode* tmp = p;
            p= q;
            q = tmp;
        }
        while(true)
        {
            if(cur->val >= p->val && cur->val <= q->val)
                return cur;
            else if(cur->val > p->val && cur->val > q->val)
            {
                cur = cur->left;
            }
            else
                cur= cur->right;
        }
        return cur;
    }
};