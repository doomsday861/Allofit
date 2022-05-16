/**
 * cevdiv
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
#define mod 998244353
vll v;
ll solve(ll index, ll prev, ll cur)
{
    if(index==v.size())
    {
        if(prev==cur)
            return 0;
        else
            return 1;
    }
    int ans = solve(index+1,prev,(cur+v[index])%2);
    if(cur != (v[index]%2))
    {
        ans += solve(index+1,cur,v[index]%2);
    }
    return ans;
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    v.clear();
    v.resize(n);
    for0(i,n) cin>>v[i];
    
    cout<<solve(0,2,0)<<endl;
    
}

    return 0;
}
