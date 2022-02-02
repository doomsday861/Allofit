/**
 * abc237B
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
ll ar[m][n];
for0(i,m)
{
    for0(j,n)
    {
        cin>>ar[i][j];
    }
}
for0(i,n)
{
    for0(j,m)
    {
        cout<<ar[j][i]<<" ";
    }
    cout<<endl;
}

    return 0;
}
