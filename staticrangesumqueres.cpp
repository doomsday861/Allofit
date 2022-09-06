/**
 * static range sum queries
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
    ll n,m;
    cin>>n>>m;
    vll v(n);
    vll pre(n+1,0);
    pre[0]= 0;
    int x = 1;
    for0(i,n)
    {
        cin>>v[i];
        if(i==0)
            pre[i+1] = v[i];
        else
            pre[i+1] = pre[i]+v[i];
    }
    // for(auto x:pre)cout<<x<<" ";
    //     cout<<endl;
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
//        cout<<b<<" "<<a-1<<endl;
        cout<<pre[b]-pre[a-1]<<endl;
    }

    return 0;
}
