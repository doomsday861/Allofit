/**
 * 1631C
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
map<ll,vector<pair<ll,ll>>> mp;

int main()
{
    run
testcase{
    ll n,k;
    cin>>n>>k;
    if(n==4 && k==3)
    {
        cout<<-1<<endl;
        continue;
    }
    ll ar[n/2][2];
    for0(i,n/2)
    {
        ar[i][0] = i;
        ar[i][1] = n-i-1;
    }
    if(k==n-1)
    {
        swap(ar[1][1],ar[0][0]);
        swap(ar[1][1],ar[2][1]);
    }
    else
    {
        if(k >= (n/2))
        {
            swap(ar[0][0],ar[n-k-1][1]);
        }
        else
            swap(ar[0][0],ar[k][0]);
    }
    for0(i,n/2)
    cout<<ar[i][0]<<" "<<ar[i][1]<<endl;
       
}
    return 0;
}
