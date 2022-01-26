/**
 * 350A
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
int main()
{
    run
    ll n,m;
    cin>>n>>m;
    vll v(n);
    vll v1(m);
    for0(i,n) cin>>v[i];
    for0(i,m) cin>>v1[i];
    ll mini = INT_MAX;
    ll maxi = INT_MIN;
    ll p = INT_MAX;
    mini = *min_element(v.begin(),v.end());
 	maxi = *max_element(v.begin(),v.end());
 	p = *min_element(v1.begin(),v1.end());
   	if(max(2*mini,maxi)<p)
   	{
   		cout<<max(2*mini,maxi);
   	}
   	else
   		cout<<-1;

    return 0;
}