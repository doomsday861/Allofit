/**
 * xor queries
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
    vll xorQueries(vll& arr, vector<vll>& queries) {
        vll ans;
        int pref[arr.size()+1];
        pref[0] = 0;
        for(int i=0; i < arr.size();i++)
        {
            pref[i+1] = pref[i]^arr[i];
        }
        for(auto x:queries)
        {
            ans.push_back(pref[x[1]+1] ^ pref[x[0]]);
        }
        return ans;
    }
int main()
{
    run
    ll n, m;
    cin>>n>>m;
    vll v(n);
    vector<vll> q(m,vll(2,0));
    for0(i,n)
    cin>>v[i];
    for0(i,m)
    {
        cin>>q[i][0]>>q[i][1];
    }
    auto ans = xorQueries(v,q);
    for(auto x:ans)
        cout<<x<<endl;
    return 0;
}
