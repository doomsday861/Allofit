/**
 * 1699C
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
ll mod = 100000007;
ll power(ll x, ll y, int p) // SOURCE GFG
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vll v(n);
    for0(i,n)
    cin>>v[i];
        if(n==1 or n==2)
        {
            cout<<1<<endl;
            continue;
        }
    ll ans=0;
    ll v1 =-1,v2=-1;
    vll checker(n);
    for0(i,n)
    {
        if(v[i]==0)
        {
            v1 = i;
        }
        else if(v[i]==1)
        {
            v2=i;
        }
        checker[v[i]] = i;
    }
    sort(v.begin() + min(v1,v2),v.begin() + max(v1,v2)+1);
    for(ll i = min(v1,v2);i<=max(v1,v2);i++)
    {
        if(ans==v[i])
            ans++;
        else
        break;
    }
    ll l = min(v1,v2);
    ll r = max(v1,v2);
    ll d = r-l+1;
    ll counter=2;
    ll total=1;
    for(ll i =2;i<n;i++)
    {
        if(checker[i] < l)
        {
            counter++;
            l = checker[i];
            d = r-l+1; 
        }
        else if(checker[i]>r)
        {
            counter++;
            r = checker[i];
            d = r-l+1;
        }
        else
        {
            total = (total *(d-counter))%mod;
        }
    }
    cout<<total<<endl;
}

    return 0;
}
