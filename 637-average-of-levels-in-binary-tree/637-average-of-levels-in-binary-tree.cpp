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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        vector<double>ans;
        q.push(root);
        while(!q.empty())
        {
            double cnt =0.00000;
            int sz = q.size();
            double sum = 0.00000;
            for(int i=0;i<sz;i++)
            {
                auto cur = q.front();
                q.pop();
                sum = sum + (cur->val*1.0);
                cnt = cnt + 1.0;
                if(cur->left) q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            ans.push_back(sum/cnt);
        }
        return ans;
    }
};