/**
 * money sums cses
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
//vector<vector<int>>dp(1000006,vector<bool>(1000000,0));
void rec(int index, int sum, vll &v,set<int>&ans)
{
    if(index==v.size())
    {
        if(sum==0)
            return;
        
        return;
    }
    rec(index+1,sum+v[index],v,ans);
    rec(index+1,sum,v,ans);
}
int main()
{
    run
ll n;
cin>>n;
vll v(n);
ll s=0;
for0(i,n)
{
    cin>>v[i];
    s+=v[i];
}
//set<int>ans;
sort(bend(v));
// rec(0,0,v,ans);
// cout<<ans.size()<<endl;
// for(auto x:ans)
// cout<<x<<" ";

int count=0;
for(int i=1;i<=s;i++)
if(dp[i]) count++;

cout<<count<<endl;
for1(i,s)
if(dp[i]) cout<<i<<" ";
    return 0;
}

