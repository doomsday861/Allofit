/**
 * 1395c
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
ll n,m;
cin>>n>>m;
vll a(n);
vll b(m);
ll ans = pow(2,9)-1;
for0(i,n)cin>>a[i];
for0(i,m)cin>>b[i];
bool f=0;

for(ll i=0; i <=pow(2,9);i++)
{
    ll cnt=0;
    for(ll j=0;j<n;j++)
    {
        for(ll k=0;k<m;k++)
        {
            if(((a[j]&b[k])|i) == i)
            {
               // cout<<a[j]<<" "<<b[k]<<" "<<i<<endl;
                cnt++;
                break;
            }
        }
        
    }
    if(cnt==n)
    {
        cout<<i<<endl;
        return 0;
    }
}

}
