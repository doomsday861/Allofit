/**
 * word break trie
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
struct node{
    node *link[26];
    bool flag=false;
    
    bool contains(char c)
    {
        return (link[c-'a']!=nullptr);
    }
    void insert(char c, node *cur)
    {
        link[c-'a'] = cur;
    }
    node *move(char c)
    {
        return link[c-'a'];
    }
    void endit()
    {
        flag = 1;
    }
    bool isend()
    {
        return flag;
    }
    
};
class Solution{
    public:
    // A : given string to search
    // B : vector of available strings
    node *head = new node();
    bool search(string s)
    {
        node *cur = head;
        for(auto x:s)
        {
            if(!cur->contains(x))
            return false;
            cur = cur->move(x);
        }
        return cur->isend();
    }
    bool solve(string s)
    {
        if(s.length()==0)
        return 1;
        for(int i=1;i<=s.length();i++)
        {
            if(search(s.substr(0,i)) and solve(s.substr(i,s.length())))
            return 1;
        }
        return 0;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        for(string word :B)
        {
            node* cur = head;
            for(auto x:word)
            {
                if(!cur->contains(x))
                {
                    cur->insert(x,new node());
                }
                cur = cur->move(x);
            }
            cur->endit();
        }
        return solve(A);
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends

