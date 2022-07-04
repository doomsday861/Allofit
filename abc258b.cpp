/**
 * abc258b
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
int col[]={0,-1,-1,-1,0,1,1,1};
int row[]={-1,-1,0,1,1,-1,0,1};
bool isval(ll x, ll y, ll n)
{
    return (x>=0 and y>=0 and x<n and y<n);
}
void pattern(ll x, ll y, ll n)
{
    for0(i,n)
    {
        ll curx = (x+row[i])%n;
        ll cury = (y+col[i])%n;
        if(isval(curx,cury,n))
            cout<<curx<<" "<<cury<<endl;
            
    }
}
int main()
{
    run
 ll n;
 cin>>n;
char ar [n][n];
 for0(i,n)
 {
    for0(j,n)
    {
        cin>>ar[i][j];
    }
 }
for0(i,n)
{
    cout<<
}
}
