/**
 * LUNCHTIM
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
  	stack<ll> st;
  	ll n;
  	cin>>n;
  	vll v(n);
  	for0(i,n)
  	cin>>v[i];
  	vll left(n,0),right(n,0);
  	left[0] =0;
  	right[n-1] =0;
  	st.push(0);
  	vll ans(n,0);
  	for1(i,n-1)
  	{
 		while(!st.empty() and v[st.top()]<=v[i])
 		{
 			if(v[i]==v[st.top()])
 				left[i] = max(left[i],left[st.top()]+1);
 			st.pop();
 		}
 		st.push(i); 		
  	}
  	while(!st.empty())
  		st.pop();
  	st.push(n-1);
  	for(ll i = n-2;i>=0;i--)
  	{
  		while(!st.empty() && v[st.top()]<=v[i])
  		{
  			if(v[i] == v[st.top()])
  				right[i]  = max(right[i],right[st.top()]+1);
  			st.pop();
  		}
  		st.push(i);
  	}
  	for0(i,n)
  	cout<<left[i]+right[i]<<" ";

   cout<<endl;
}
    return 0;
}