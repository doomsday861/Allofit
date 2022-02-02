/**
 * newton
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
ll neartwo(ll n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p);
}
bool isPowerOfTwo (ll x)
{
    return x && (!(x&(x-1)));
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    if(n&1 || isPowerOfTwo(n))
    {
        cout<<-1<<endl;
        continue;
    }

    ll a = (n%neartwo(n))/2;
    ll c = n/2;
    ll b = n - (a+c);
    cout<<a<<" "<<b<<" "<<c<<endl; 
    // ll x = a^b^c;
    // cout<<x<<endl;
    
}

    return 0;
}
