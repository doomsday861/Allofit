/**
 * magicparent
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
    node(int data){
        val = data;
        left = nullptr;
        right = nullptr;
    }
};
int ans=0;
int solve(node* root)
{
    if(!root)
        return 0;
    
    int left = solve(root->left);
    int right = solve(root->right);
    
    if(left!=0 && right!=0)
    {
        
        if(left&1 && right&1^1){
            cout<<root->val<<" ";
            ans++;
        }
        if(left&1^1 && right&1){
            cout<<root->val<<" ";
         ans++;
     }
    }
    
    
    return 1 + left+right;
}
vo
int main()
{
    run
    struct node *root = new node(2);     /*           2            */
    root->left        = new node(1);     /*        /     \         */
    root->right       = new node(3);     /*       1       3        */
    root->left->left  = new node(4);     /*      / \     /  \      */
    root->left->right = new node(10);    /*     4   10  8    5     */
    root->right->left  = new node(8);    /*        /               */
    root->right->right = new node(5);    /*       6                */
    root->left->right->left = new node(6);

    solve(root);
    cout<<ans;
    return 0;
}

