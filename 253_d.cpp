/**
 * 253_d
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
ll sumAP(ll n, ll d)
{
    n /= d;
 
    return (n) * (1 + n) * d / 2;
}

ll sumMultiples(ll A, ll B, ll n)
{
    n--;
 
    ll common = (A * B) / std::gcd(A, B);
 
    return sumAP(n, A) + sumAP(n, B) - sumAP(n, common);
}
int main()
{
run
    ll n,a,b;
    cin>>n>>a>>b;
    ll x = n/a;
    ll y = n/b;
    ll sumofa = a * ((x*(x+1))/2);
    ll sumofb = b * (y*(y+1)/2);
    ll both = std::lcm(a,b);
    ll z = n/both;
    ll sumofboth = both * (z*(z+1)/2);
    ll total = (n*(n+1))/2;
    ll ans = total - sumofa-sumofb+sumofboth;
    cout<<ans;
    
    
    
    return 0;
}
