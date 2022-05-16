/**
 * 520 Try with DFS
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
struct node
{
    ll val;
    ll level;
};
ll dfs(ll x, ll y)
{
    set<ll> vis;
    queue<node> q;
    node n = {x,0};
    q.push(n);
    while(!q.empty())
    {
        node temp = q.front();
        q.pop();
        if(temp.val == y)
        return temp.level;

        vis.insert(temp.val);

        if(temp.val*2 == y || temp.val - 1 ==y)
        return temp.level+1;

        if(vis.find(temp.val*2)== vis.end())
            {
                n.val = temp.val*2;
                n.level = temp.level+1;
                q.push(n);
            }
        if(temp.val>=0 && vis.find(temp.val-1)==vis.end())
        {
            n.val = temp.val-1;
            n.level = temp.level+1;
            q.push(n);
        }
    }
    return -1;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,m;
cin >>n>>m;
cout<<dfs(n,m);

    return 0;
}