/**
 * maxxor
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
    node *link[2];
    bool flag=false;
    
    bool contains(int c)
    {
        return (link[c]!=nullptr);
    }
    void insert(int c, node *cur)
    {
        link[c] = cur;
    }
    node *move(int c)
    {
        return link[c];
    }
    
};
int xorthis(int x, node *head)
{
    node* cur = head;
    int ans =0;
    for(int i = 31;i>=0;i--)
    {
        int bit = 1 & (x>>i);
//        cout<<bit;
        if(cur->contains(1-bit))
        {
            ans = ans | (1<<i);
            cur = cur->move(1-bit);
        }
        else
        {
            cur = cur->move(bit);
        }
    }
 //   cout<<" "<<x<<endl;
    return ans;
}
int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) 
{
    // Write your code here.   
    node* head = new node();
    for(int x:arr1)
    {
        node* cur = head;
        for(int i = 31;i>=0;i--)
        {
            int bit = 1 & (x>>i);
     //       cout<<bit;
            if(!cur->contains(bit))
            {
                cur->insert(bit,new node());
            }
            cur = cur->move(bit);
        }
 //       cout<<" "<<endl;
    }
    int ans =0;
    for(int x :arr2)
    {
        ans = max(ans,xorthis(x,head));
    }
    return ans;
}
int main()
{
    run
testcase{
    ll n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m);
    for0(i,n)
    cin>>v1[i];
    for0(i,m)
    cin>>v2[i];
    cout<<maxXOR(n,m,v1,v2)<<endl;
    
}

    return 0;
}
