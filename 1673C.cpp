/**
 * 1673C
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
#define mod 1000000007;
int main()
{
    run
    vll p;
    for(ll i=1;i<=50004;i++)
    {
        string s = to_string(i);
        string r =s;
        reverse(bend(s));
        if(s==r)
        {
            p.pb(i);
        }
    }
   vector<int>dp(400005);
   for(int i=0; i <=p.size();i++)
    dp[0] = 1;

    for(int i=0;i<p.size();i++)
    {
        for(int j=p[i];j<=400005;j++)
        {
            dp[j] += dp[j - p[i]];
            dp[j]%=mod;
        }
    }
testcase{
    ll n;
    cin>>n;
    cout<<dp[n]<<endl;
    
}

    return 0;
}
