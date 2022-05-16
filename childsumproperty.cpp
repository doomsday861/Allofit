/**
 * childsumproperty
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
class node{
public:
    int val;
    node* left,*right;
    node(int data)
    {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};
void preorder(node* root)
{
    if(!root)
        return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void changetree(node* root)
{
    if(!root)
        return;
    
    int child =0;
    if(root->left)
        child+=root->left->val;
    if(root->right)
        child+=root->right->val;
    if(child>=root->val)
        root->val = child;
    else
    {
        if(root->left)
            root->left->val = root->val;
        if(root->right)
            root->right->val = root->val;
    }
    changetree(root->left);
    changetree(root->right);
    
    int total =0;
    if(root->left) total+=root->left->val;
    if(root->right) total+=root->right->val;
    if(root->left or root->right) root->val = total;
}
int main()
{
    run
    node* root=new node(40);
    root->left=new node(10);
    root->right=new node(20);
    root->left->right=new node(2);
    root->left->left=new node(5);
    //root->left->right->left=new node(6);
    root->right->right=new node(30);
    root->right->left=new node(40);
    
    changetree(root);
    preorder(root);

    return 0;
}
