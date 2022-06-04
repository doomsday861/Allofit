/**
 * range sum query leetcode
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
ll ar[n][m];
memset(ar,0,sizeof(ar));
for0(i,n)
{
    for0(j,m)
    {
        cin>>ar[i][j];
    }
}
ll pre[n+1][m+1];
memset(pre,0,sizeof(pre));
for1(i,n)
{
    for1(j,m)
    {
        pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + ar[i-1][j-1];
        cout<<pre[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}
