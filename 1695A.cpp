/**
 * 1695A
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
    ll n,m;
    cin>>n>>m;
    ll maxi = INT_MIN;
    ll r,c;
    vector<vll> v(n,vll(m,0));
    for0(i,n)
    {
        for0(j,m)
        {
            cin>>v[i][j];
            if(v[i][j] > maxi)
            {
                r = i;
                c = j;
                maxi = v[i][j];
            }
        }
    }
    ll ans = max(r+1,n-r) * max(c+1,m-c);
    cout<<ans<<endl;
    
}

    return 0;
}
