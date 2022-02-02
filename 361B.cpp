/**
 * 361B
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
ll gcdr(unsigned ll x,unsigned ll n)
{
    return __gcd(x,n);
}
int main()
{
    run
 unsigned ll n,k;
 cin>>n>>k;
 
 if(k>=n)
 {
    cout<<-1;
    return 0;
 }
 ll x= 1;
 for(ll i =1; i<=n;i++)
 {
    if(i==1)
    {
        cout<<n-k<<" ";
    }
    else
    {
        
        if(i<=(n-k))
        {
            cout<<i-1<<" ";
        }
        else
        {
            cout<<n-k+x<<" ";
            x++;
        }    
    }
}
 
    return 0;
}
