/**
 * adjsumpar
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
    ll n;
    cin>>n;
    ll x=0;
    for0(i,n)
    {
        ll y;cin>>y;
        x+=y;
    }
    if(x&1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    
}
// 0  = odd + odd / even + even
//1  = odd + even / even + odd
    return 0;
}
