/**
 * 1521B
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

    
 testcase
  {
  	ll n;
  	cin>>n;
  	vll v(n);
  	ll mini =0;
  	ll min = INT_MAX;
  	for0(i,n){
  		
  		cin>>v[i];
  		if(v[i]<min)
  		{
  			min = v[i];
  			mini = i;
  		}
  	}
  	ll k=0;
  	vector<vector<ll>>ans;
  	ll counter = min+1;
  	for(ll i = mini+1;i<n;i++)
  	{
  		vll temp = {i+1,mini+1,counter++,min};
  		ans.pb(temp);
  	}
  	counter = min+1;
  	for(ll i=mini-1;i>=0;i--)
  	{
  		vll temp = {i+1,mini+1,counter++,min};
  		ans.pb(temp);
  	}
  	cout<<ans.size()<<endl;

  	// for(auto x:v)
  	// 	cout<<x<<" ";
  	// cout<<k<<endl;
  	for0(i,ans.size())
  	{
  		for(auto x:ans[i])
  			cout<<x<<" ";
  		cout<<endl;
  	}
  	// cout<<endl;
  	// for0(i,n-1)
  	// {
  	// 	if(__gcd(v[i],v[i+1])!=1)
  	// 			cout<<__gcd(v[i],v[i+1]);
  	// }

}
   

    return 0;
}