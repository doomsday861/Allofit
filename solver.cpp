/**
 * solver
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
vector<int> ans;
int height(Tree<int>* node) {
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight) {
            return(lheight + 1);
        }
        else {
          return(rheight + 1);
        }
    }
}
 
void CurrentLevel(Tree<int>* root, int level) {
    if (root == NULL)
        return;
    if (level == 1)
        ans.push_back(root->value)
    else if (level > 1) {
       CurrentLevel(root->left, level-1);
       CurrentLevel(root->right, level-1);
    }
}
vector<int> solution(Tree<int>* t)
{
    int h = height(t);
    int i;
    for (i = 1; i <= h; i++)
     CurrentLevel(t, i);   
    return ans;
}
int main()
{
    run
string s;
cin>>s;
vector<string> ans = solve(s);
for(auto x:ans)
cout<<x<<" ";

    return 0;
}
