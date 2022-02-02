/**
 * 219B
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
ll count(ll x)
{
    string s = to_string(x);
    ll ans=0;
    for(ll i = s.length()-1;i>=0;i--)
    {
        if(s[i]=='9')
            ans++;
        else
            return ans;
    }
    return ans;
}
int main()
{
    run
 ll n,k;
 cin>>n>>k;
 ll ans=n;
 if(k==0)
    {
        cout<<n;
        return 0;
    }
 ll counter = log10(n+1)+1;
 for(ll i=1;i<=counter;i++)
 {
    ll mod = pow(10,i);
    ll temp = n-(n%mod)-1;
 //   cout<<temp<<endl;
    if(n-temp<=k  && count(temp) > count(ans))
    {
        ans = temp;
    }
 }
 cout<<ans;

 

    return 0;
}
