/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*>q;
        string ans="";
        if(!root)
            return "# ";
        int level =0;
            q.push(root);
        while(!q.empty())
        {
          auto cur = q.front();
            q.pop();
            if(!cur)
            {
                ans.push_back('#');
                ans +=' ';
                continue;
            }
            else
                ans+= to_string(cur->val)+" ";
            q.push(cur->left);
            q.push(cur->right);
        }
        //cout<<ans;
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data[0]=='#')
            return nullptr;
        
        vector<string>v;
        string tmp="";
        for(int i=0;i<data.length();i++)
        {
            if(data[i]==' ')
            {
                v.push_back(tmp);
                tmp="";
            }
            else
                tmp+=data[i];
        }
        TreeNode* root = new TreeNode(stoi(v[0]));
        int i =1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            if(v[i]=="#")
            {
                cur->left = nullptr;
            }
            else
            {
                cur->left = new TreeNode(stoi(v[i]));
                q.push(cur->left);
            }
            i++;
            if(v[i]=="#")
            {
                cur->right = nullptr;
            }
            else
            {
                cur->right = new TreeNode(stoi(v[i]));
                q.push(cur->right);
            }
            i++;
        }

        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));