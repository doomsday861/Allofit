/**
 * KICKSTART ROUND D
 * B
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
ll choosek(ll k, ll *pre, ll *suf, ll n)
{
    ll ans = max(pre[k-1],suf[n-k]);
    if(k==n)
        return pre[n-1];
    if(k==0)
        return 0;
    for(int i = 1; i < k;i++)
    {
        ans = max(ans,pre[i-1]+suf[n-(k-i)]);
    }
    return ans;
}
int main()
{
    run
    ll tc=1;
testcase{
    ll n,m,k;
    cin>>n;
    ll pre1[n+1];
    ll suf1[n+1];
    vll v1(n);
    for0(i,n)
    {
        cin>>v1[i];
        if(i==0)
            pre1[i] = v1[i];
        else
            pre1[i] = pre1[i-1]+v1[i];
    }
    cin>>m;
    ll pre2[m+1];
    ll suf2[m+1];
    vll v2(m);
    for0(i,m)
    {
        cin>>v2[i];
        if(i==0)
        {
            pre2[i] = v2[i];
        }
        else
            pre2[i] = pre2[i-1]+v2[i];
    }
    for(ll i = m-1;i>=0;i--)
    {
        if(i==m-1)
            suf2[i] = v2[i];
        else
            suf2[i] = suf2[i+1] +v2[i];
    }
    for(ll i = n-1;i>=0;i--)
    {
        if(i==n-1)
            suf1[i] = v1[i];
        else
            suf1[i] = suf1[i+1] +v1[i];
    }
    cin>>k;
    ll ans =0;
    for(int i=max(0LL,k-m);i<=min(k,n);i++)
    {
        ans = max(ans,choosek(i,pre1,suf1,n)+choosek(k-i,pre2,suf2,m));
    }
    
    cout<<"Case #"<<tc++<<": "<<ans<<endl;  

}

    return 0;
}
