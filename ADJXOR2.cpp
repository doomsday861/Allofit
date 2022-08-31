/**
 * ADJXOR2
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
ll n,x;
ll solve(int idx, bool prev, vll &v)
{
    if(idx==(n-1))
        {
            if(prev)
            {
                return max((v[idx]+x)^(v[idx-1]+x),(v[idx]^(v[idx-1]+x)));
            }
            if(!prev)
            {
                return max((v[idx]+x)^(v[idx-1]),(v[idx]^(v[idx-1])));
            }
        }
    ll ans = 0;
    if(prev)
    {
        ans = (v[idx]^(v[idx-1]+x)) + max(solve(idx+1,0,v),solve(idx+1,1,v));
    }
    else if(!prev)
    {
        ans = (v[idx]^v[idx-1]) + max(solve(idx+1,0,v),solve(idx+1,1,v));
    }
    return ans;
}
int main()
{
    run
testcase{
    cin>>n>>x;
    vll v(n);
    for0(i,n)
    cin>>v[i];
    cout<<max(solve(1,0,v), solve(1,1,v))<<endl;
    
}

    return 0;
}
