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
    int ans=0;
    //pair<sum,count>
    pair<int,int> solve(TreeNode* root)
    {
        if(!root)
            return{0,0};
        
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        int cursum = left.first + right.first + root->val;
        int tc = left.second + right.second+1;
        if(cursum/tc == root->val) ans++;
        
        return {cursum+root->val,tc+1};
    }
    int averageOfSubtree(TreeNode* root) {
        pair<int,int> x = solve(root);
        return ans;
    }
};