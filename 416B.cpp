/**
 * 416B
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
ll m,n;
cin>>m>>n;
ll ar[m+1][n+1];
for1(i,m)
{
    for1(j,n)
    cin>>ar[i][j];
}
// for(ll i=1;i<m;i++)
// {
//     for(ll j=0;j<n-1;j++)
//     {
//        // cout<<ar[i][j]<<" "<<ar[i-1][j]<<endl;
//         ar[i][j] += ar[i-1][j];
//     }
// }
// ll curtime =0;
// for0(i,n)
// curtime +=ar[0][i];

ll ans[50005][6] = {0};

for1(i,n)
{
    ll x=0;
    for1(j,m)
    {
        ll maxt = max(x,ans[j][i-1]);
        ans[j][i] = maxt + ar[j][i];
        x = ans[j][i];
    }
}
for1(i,m)
cout<<ans[i][n]<<" ";


    return 0;
}
