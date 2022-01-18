/**
 * 1619B
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
map<int,int> mp;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	ll n;
  	cin>>n;
  	ll counter=0;
  	set<ll> st;
  	for(ll i=0; i <=sqrt(n);i++)
  	{
  		if(i*i <=n)
  		st.insert(i*i);
  		if(i*i*i <=n)
  		st.insert(i*i*i);
  	}
  	cout<<st.size()-1<<endl;
}
    return 0;
}