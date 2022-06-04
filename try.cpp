/**
 * try
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
ll ans=0;
ll solver(ll i, ll j, ll n, ll r, ll g, ll b,ll rc,ll gc,ll bc )
{
    if(i==n && j==2)
    {
        if(r>=n or g>=n or b>=n or rc>=3 or gc>=3 or bc>=3)
            return 1;
        else
            return 0;
    }
    else if(i>n or j>3)
        return 0;
    
    ll x = solver(i,j+1,n,r,g,b,rc+1,gc,bc);
    ll y = solver(i,j+1,n,r,g,b,rc,gc+1,bc);
    ll z = solver(i,j+1,n,r,g,b,rc,gc,bc+1);
    ll a = solver(i+1,j,n,r+1,g,b,rc,gc,bc);
    ll b1 = solver(i+1,j,n,r,g+1,b,rc,gc,bc);
    ll c = solver(i+1,j,n,r,g,b+1,rc,gc,bc);
    
    return(x+y+z+a+b1+c);
}
int main()
{
    run
    ll n;
    cin>>n;
    cout<<solver(1,1,n,0,0,0,0,0,0);

    return 0;
}
