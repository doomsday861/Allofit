/**
 * 699C codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll n;
ll dyna(ll ar[])
{
	ll dp[n+1][3]={0};
	
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<3;j++)
		{
			dp[i][j]=0;
		}
	}

	for(ll i=1;i<=n;i++)
	{
		dp[i][0] = min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]))+1;
		dp[i][1] = INT_MAX;
		dp[i][2] = INT_MAX;
		if(ar[i-1]==1 || ar[i-1]==3)
		{
			dp[i][1] = min(dp[i-1][2],dp[i-1][0]);
		}
		if(ar[i-1]==2 || ar[i-1] == 3)
		{
			dp[i][2] = min(dp[i-1][1],dp[i-1][0]);
		}
	}
	// for(ll i=0;i<=n;i++)
	// {
	// 	for(ll j=0;j<3;j++)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return min(dp[n][1],min(dp[n][0],dp[n][2]));
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin>>n;
ll ar[n];
ll r=0;
for(ll i=0;i<n;i++)
{
	cin>>ar[i];
	// if(ar[i]==0)
	// 	r++;
}
ll ans = dyna(ar);
cout<<ans<<endl;
// ll i=0;
// ll prev = 0;
// bool f=0;
// vector<ll> job;
// while(i<n)
// {	
// //	cout<<"element =  "<<ar[i]<<" index = "<<i<<" days worked = "<<r<<endl;
//     if(ar[i]==0)
// 	{
// 		job.push_back(0);
// 		prev =0;
// 	}
// 	else if(ar[i]==1 && prev!=1)
// 	{
// 		job.push_back(1);
// 		prev =1;
// 	}
// 	else if(ar[i]==2 && prev!=2)
// 	{
// 		job.push_back(2);
// 		prev = 2;
// 	}
// 	else if(ar[i]==3)
// 	{
// 		// if(prev==0)
// 		// {
// 		// 	if(i < n-1 && ar[i+1]==)
// 		// }
// 		if(prev==2)
// 			{
// 				job.push_back(1);
// 				prev=1;
// 			}
// 		else if(prev==1)
// 		{	
// 			job.push_back(2);
// 			prev=2;
// 		}
// 	}
// 	else if(ar[i]==1 && prev == 1)
// 	{
// 		job.push_back(0);
// 		prev =0;
// 	}
// 	else if(ar[i]==2 && prev == 2)
// 	{
// 		job.push_back(0);
// 		prev =0;
// 	}
// 	i++;
// }
// ll ans = count(job.begin(), job.end(),0);
// cout<<ans;

return 0;
}