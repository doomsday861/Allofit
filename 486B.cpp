/**
 * 486B
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
using namespace std;
ll ans[1005][1005];
 ll m,n;
void setter(ll a, ll b)
{
    for0(i,m)
    {
        ans[i][b] = 0;
    }
    for0(i,n)
    ans[a][i] = 0;
}
ll checking(ll a,ll b)
{
    ll x=0;
    for0(i,m)
    {
        x = x|ans[i][b];
    }
    for0(i,n)
    {
        x = x|ans[a][i];
    }
    return x;
}
int main()
{
    run
 cin>>m>>n;
 ll ar[m][n];
 for0(i,m)
 {
    for0(j,n)
    {
        ans[i][j] = 1;
        cin>>ar[i][j];
    }
 }
 for0(i,m)
 {
    for0(j,n)
    {
        if(ar[i][j]==0)
        {
            //cout<<i<<" "<<j<<endl;
            setter(i,j);
        }
    }
 }
ll checker[m][n];
bool f=0;
for0(i,m)
{
    for0(j,n)
    {
        checker[i][j] = checking(i,j);
        if(checker[i][j] !=ar[i][j])
            {
                //cout<<i<<" "<<j<<endl;
                f=1;
            }
       // cout<<checker[i][j]<<" ";   
    }
    //cout<<endl;
}
if(f)
{
    cout<<"NO";
    return 0;
}
cout<<"YES"<<endl;
for0(i,m)
{
    for0(j,n)
        cout<<ans[i][j]<<" ";
    cout<<endl;
}


    return 0;
}
