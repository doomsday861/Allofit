/**
 * 1692G
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
testcase{
    ll n,k;
    cin>>n>>k;
    vll v(n);
    for0(i,n)
    cin>>v[i];
    ll cur =1;
    ll cnt = 0;
    for(ll i = n-2;i >=0;i--)
    {
        if(v[i+1] * 2 > v[i])
        {
            cur++;
        }
        else
            cur=1;
        if(cur>=(k+1))
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

    return 0;
}
