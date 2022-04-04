/**
 * 1469B
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
int main()
{
    run

    
 testcase
  {
    ll n,k;
    cin>>n;
    vll r(n);
    for0(i,n) cin>>r[i];
    cin>>k;
    vll b(k);
    for0(i,k) cin>>b[i];
    ll ans=0;
    ll dp[n+5][k+5];
    for0(i,n+1)
    {
        for0(j,k+1)
        {
            dp[i][j] = INT_MIN; 
        }
    }
        dp[0][0] =0;
    for0(i,n+1)
    {
        for0(j,k+1)
        {
            if(i<n)
                dp[i+1][j] = max(dp[i+1][j],dp[i][j]+r[i]);
            if(j<k)
                dp[i][j+1] = max(dp[i][j+1],dp[i][j]+b[j]);
            ans = max(dp[i][j],ans);
        }
    }
    cout<<ans<<endl;
}
   

    return 0;
}