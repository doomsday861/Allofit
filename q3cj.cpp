/**
 * q3cj
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

    
 ll t;
 cin>>t;
 ll x = 1;
  while(t--)
  {
  	ll n;
  	cin>>n;
  	vll v(n);
  	priority_queue<ll,vll,greater<ll>>pq;
  	int ans =0;
  	for0(i,n)
  	{
  		cin>>v[i];
  		pq.push(v[i]);
  	}
  	while(!pq.empty())
  	{
  		if(pq.top()>ans)
  		{
  			//cout<<ans<<" "<<pq.top()<<endl;
  			ans++;
  			pq.pop();
  		}
  		else
  			pq.pop();
  	}
  	cout<<"Case #"<<x++<<": "<<ans<<endl;

}
   

    return 0;
}