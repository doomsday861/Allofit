#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
	ll t;
	cin >>t;
	while(t--)
	{
		ll n,k,m;
		cin >> n >> k>>m;
		string s[n+1];
		for(ll i=1 ;i<=n;i++)
		{
			cin>>s[i];
		}
		string l = s[k];
		sort(l.begin(),l.end());
	cout<<s[k]<<endl;
}
}