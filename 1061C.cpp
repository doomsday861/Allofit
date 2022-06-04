/**
 * 1061C
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
#define mod 1000000007;
#define bend(x) x.begin(),x.end()
using namespace std;
ll ans=0;
vll dp;
ll rec(ll index, vll &v, ll i)
{
    //cout<<index<<" "<<i<<endl;
    if(index==v.size())
        return 1;
    // string key = to_string(i)+" "+to_string(index);
    if(dp[index]!=-1)
        return dp[index];
    if(v[index]%i==0)
    {
        ll a = rec(index+1,v,i+1)%mod;
        ll b = rec(index+1,v,i)%mod;
       return dp[index] =  (a+b)%mod; 
    }
    else
        return dp[index]= (rec(index+1,v,i))%mod;
}
int main()
{
    run

    ll n;
    cin>>n;
    dp.resize(n+1);
    vll v(n);
    for0(i,n)
    {
        cin>>v[i];
        dp[i] = -1;
    }
    dp[n]=-1;
    cout<<rec(0,v,1)-1;
    return 0;
}
    