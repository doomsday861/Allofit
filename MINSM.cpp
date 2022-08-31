/**
 * MINSM
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
bool isprime(ll n)
{
    for(ll i= 2;i<sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vll v(n);
    ll ts=0;
    for0(i,n){
        cin>>v[i];
    }
   // cout<<brute(v,n)<<endl;
   sort(bend(v));
   ll maxi = v[n-1];
   ll mini = v[0];
   for1(i,n-1)
   {
     mini = min(mini,std::gcd(v[i],v[0]));
   }
   for1(i,n-1)
   {
    if(std::gcd(mini,v[i])<v[i])
        v[i] = std::gcd(mini,v[i]);
    if(std::gcd(mini,v[i])<v[0])
        v[0] = std::gcd(mini,v[i]);
   }
   for0(i,n)
   ts+=v[i];
   cout<<ts<<endl;
    
}

    return 0;
}
