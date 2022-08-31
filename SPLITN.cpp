/**
 * SPLITN
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
ll highestPowerof2(ll n) // source gfg
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p);
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    ll cnt=0;
    while(n>=1)
    {
        n = n - highestPowerof2(n);
        cnt++;
    }
    cout<<cnt-1<<endl;
    
}

    return 0;
}
