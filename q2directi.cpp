/**
 * q2 directi
**/
#include<bits/stdc++.h>
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
  	ll n;
  	cin>>n;
  	vector<ll> v(n);
  	int maxid =-1;
  	ll maxi =INT_MIN;
  	stack<ll> pre;
  	stack<ll> post;
  	vector<ll> ans(n,INT_MAX);
  	for(ll i=0; i < n;i++){
	 cin >>v[i];
	 if(v[i] > maxi)
	 {
	 	maxi = v[i];
	 	maxid = i;
	 }
}
pre.push(maxi);
post.push(maxi);
ans[maxid] =0;
for(ll i=maxid-1; i>=0; i--)
{
	if(pre.top() >= v[i])
	{
		ans[i] = min((ll)pre.size(),(ll)ans[i]);
		pre.push(v[i]);
	}
	else
	{
		while(!pre.empty() && v[i] >= pre.top())
		{
			pre.pop();
		}
		ans[i] = min((ll)pre.size(),(ll)ans[i]);
		pre.push(v[i]);
	}
}
for(ll i=maxid+1; i<n; i++)
{
	if(post.top() >= v[i])
	{
		ans[i] = min((ll)post.size(),(ll)ans[i]);
		post.push(v[i]);
	}
	else
	{
		while(!post.empty() && v[i] >= post.top())
		{
			post.pop();
		}
		ans[i] = min((ll)post.size(),(ll)ans[i]);
		post.push(v[i]);
	}
}
ans[0] = min(ans[0],ans[1]+1);
for(ll i=1; i<maxid-1;i++)
{
	ans[i] = min(ans[i],min(ans[i-1]+1,ans[i+1]+1));
}
for(ll i=maxid+2;i<n;i++)
{
		ans[i] = min(ans[i],min(ans[i-1]+1,ans[i+1]+1));
}
for(auto x:ans)
cout<<x<<" ";
cout<<endl;
}
return 0;
}