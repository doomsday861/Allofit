/**
 * abc259_a
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
 ll n,m,x,t,d;
 cin>>n>>m>>x>>t>>d;
 if(m>=x)
 {
    cout<<t;
 }
 else
 {
    ll dif = t - (x-m)*d;
    cout<< dif<<endl;
 }

    return 0;
}
