/**
 * trie
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
int main()
{
    run
testcase{
    string s;
    cin>>s;
    node *head = new node();
    int cnt=1;
    for(int i=0; i <s.size();i++)
    {
        node *cur = head;
        for(int j = i;j<s.size();j++)
        {
            if(!cur->contains(s[j]))
            {
                cnt++;
                cur->insert(s[j],new node());
            }
            cur = cur->move(s[j]);
        }
    }
    cout<<cnt<<endl;
}

    return 0;
}
