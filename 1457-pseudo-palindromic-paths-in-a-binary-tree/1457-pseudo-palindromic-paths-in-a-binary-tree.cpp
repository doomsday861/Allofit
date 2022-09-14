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
    bool ispalin(vector<int>&v)
    {
        // for(auto x:v) cout<<x<<" ";
        // cout<<endl;
        int eve =0;
        int odd =0;
        int len = 0;
        for(int i=1;i<=9;i++)
        {
            if(v[i]==0) continue;
            else if(v[i]&1)odd++;
            else eve++;
            len+=v[i];
        }
        //cout<<len<<endl;
        if(len&1)
        {
            if(odd==1) return true;
            return false;
        }
        else
        {
            if(odd==0) return true;
            return false;
        }
        return false;
    }
    void solve(TreeNode* root, vector<int>freq)
    {
        if(!root) return;
        if(!root->left and !root->right)
        {
            freq[root->val]++;
            if(ispalin(freq))cnt++;
            return;
        }
        freq[root->val]++;
        solve(root->left,freq);
        solve(root->right,freq);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>freq(10,0);
        solve(root,freq);
        return cnt;
    }
};