/**
 * kflip
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
int power(long long x, unsigned int y, int p)
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
    ll mod = pow(10,9)+7;
testcase{
    ll n,k;
    string s;
    cin>>n>>k>>s;
    if(n==k)
    {
        cout<<2<<endl;
    }
    else if(k&1)
    {
        cout<<power(2,n,mod)<<endl;
    }
    else
    {
        cout<<power(2,n-1,mod)<<endl;
    }
}

    return 0;
}
