/**
 * s
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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll suf[n+1];
    memset(suf,0,sizeof(suf));
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        x--;
        suf[x]+=1;
        suf[n-x]-=1;
    }
    ll pre[n+1];
    memset(pre,0,sizeof(pre));
    for(int i=0;i<=n;i++)
    {
        if(i==0)
            pre[i] = suf[i];
        else
        pre[i] = suf[i] + pre[i-1];
  //  cout<<pre[i]<<" ";
    }
    for(int i=0;i<n/2;i++)
    {
        if(pre[i]&1)
        {
            swap(s[i],s[n-i-1]);
        }
            
    }
    cout<<s;
    return 0;
}
