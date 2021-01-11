/**
 * CLEANUP
**/
#include"bits/stdc++.h"
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	ll n,m;
  	cin>>n>>m;
  	ll ar[m];
  	for(ll i=0;i<m;i++) cin>>ar[i];
  		sort(ar,ar+m);
  	queue<ll> ch;
  	queue<ll> as;
  	ll p=0;
  	bool flag =1;
  	for(ll i=1;i<=n;i++)
  	{	
  		if(ar[p]==i)
  		{
  			p++;
  			continue;
  		}
  	if(flag)
  	{
  		ch.push(i);
  		flag = !flag;
  	}
  	else
  	{
  		as.push(i);
  		flag = !flag;
  	}
  	}
  	  	while(!ch.empty())
  	  	{
  	  		cout<<ch.front()<<" ";
  	  		ch.pop();
  	  	}
  	 cout<<endl;
  	 while(!as.empty())
  	 {
  	 	cout<<as.front()<<" ";
  	 	as.pop();
  	 }
  	 cout<<endl;
}
    return 0;
}