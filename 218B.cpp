/**
 * 218B
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
using namespace std;
int main()
{
    run

    ll p,n;
    cin>>p>>n;
    vll v(n);
    priority_queue<ll> pq;
    for0(i,n){
     cin>>v[i];
     pq.push(v[i]);
 }
    sort(v.begin(),v.end());
    ll tp =p;
    ll i=0;
    ll maxs=0;
    while(tp--)
    {
    	ll x = pq.top();
    	maxs += x;
    	pq.pop();
    	x--;
    	pq.push(x);
    }
    cout<<maxs;
   ll mins=0;
    tp=p;
    i=0;
   while(tp--)
   {
   		mins +=v[i];
   		v[i]--;
   		if(v[i]==0)
   			i++;
   		i %=n;
   }
   cout<<" "<<mins;

    return 0;
}