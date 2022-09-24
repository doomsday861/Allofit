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
    vector<vector<int>>ans;
    void solve(TreeNode* root, int target, vector<int>v)
    {
        if(!root)
            return;
        target -=root->val;
        v.push_back(root->val);
        if(!root->left and !root->right)
        {
            if(target==0 )
            {
                ans.push_back(v);
                return;
            }
            else
                return;
        }
        if(root->left)
        {
            solve(root->left,target,v);
        }
        if(root->right)
        {
            solve(root->right,target,v);
        }
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        solve(root,targetSum,v);
        return ans;
    }
};