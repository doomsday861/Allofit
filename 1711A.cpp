/**
 * 1711A
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
testcase{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        continue;
    }
    for1(i,n)
    {
        if(i==1)
            cout<<2<<" ";
        else if(i==n)
        {
            cout<<1<<" ";
        }
        else
        cout<<i+1<<" ";
    }
    cout<<endl;
    
}
//1:56
    return 0;
}