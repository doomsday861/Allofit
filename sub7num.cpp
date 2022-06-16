/**
 * sub7num
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
ll powerLL(ll x, ll n)
{
    ll result = 1;
    while (n) {
        if (n & 1)
            result = result * x % 7;
        n = n / 2;
        x = x * x % 7;
    }
    return result;
}
ll dp[300007][7];

ll solve(vll &v, ll n, ll idx, ll rem)
{
    if(idx==n)
    {
        if(rem==0)
            {
                return 1;
            }
        else
            return 0;
    }
    if(dp[idx][rem]!=-1)
        return dp[idx][rem];
    ll a = solve(v,n,idx+1,rem);
    ll x = to_string(v[idx]).length();
    ll cur = powerLL(10,x);
    ll b = solve(v,n,idx+1,(rem*cur+v[idx])%7);
    return dp[idx][rem] = (a+b)%1000000007;
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vll v(n);
    memset(dp,-1,sizeof(dp));
    for0(i,n)cin>>v[i];
    cout<<solve(v,n,0,0)-1<<endl;
}

    return 0;
}
