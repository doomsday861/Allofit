/**
 * validate BST
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
class TreeNode{
public:
    TreeNode *left;
    TreeNode *right;
    int val;
    TreeNode(int data)
    {
        left = nullptr;
        right = nullptr;
        val = data;
    }
};
struct content{
    int mini;
    int maxi;
    int count;
        content(int minNode, int maxNode, int maxSize) {
        this->maxi = maxNode;
        this->mini = minNode;
        this->count = maxSize;
    }
};
content finder(TreeNode* root)
{
    if(!root)
    {
        return{INT_MAX,INT_MIN, 0};
    }
    content left = finder(root->left);
    content right= finder(root->right);
    //cout<<root->val<<endl;
    //cout<<"LEFT = "<<left.mini<<" "<<left.maxi<<" "<<left.count<<endl;
    //cout<<"RIGHT = "<<right.mini<<" "<<right.maxi<<" "<<right.count<<endl;
    if(left.maxi < root->val && root->val < right.mini)
    {
        return content(min(left.mini,root->val),max(right.maxi,root->val),left.count+right.count+1);
    }
    else
        return{INT_MIN,INT_MAX,max(left.count,right.count)};
    
}
int LargestBST(TreeNode* root)
{
    if(!root)
        return 0;
    return finder(root).count;
}
int main()
{
    run
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(4);
    root->right = new TreeNode(6);
    root->left->right = new TreeNode(9);
    cout<<LargestBST(root);
    return 0;
}
