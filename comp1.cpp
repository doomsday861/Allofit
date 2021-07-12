/**
 * 191B138
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
ll n,m;
cin>>n>>m;
vector<ll> stu(n);
vector<pair<ll,ll>> v(m);
for(ll i=0; i <m;i++)
{
	cin>>v[i].first>>v[i].second;
}
for(ll i=0;i<n;i++)
{
	stu[i] = i+1;
}
vector<vector<ll>> subset;
ll ans=0;
for(ll mask =0; mask< (1<<n); mask++)
{
	vector<ll> temp;
	for(ll i=0; i < n;i++)
	{
		if(mask &(1<<i))
		{
			temp.push_back(stu[i]);
		}
	}
	subset.push_back(temp);
	temp.clear();
}
// for(ll i=0 ; i<(1<<n);i++)
// {
// 	for(ll j=0; j<subset[i].size();j++)
// 	{
// 		cout<<subset[i][j]<<" ";
// 	}
// 	cout<<endl;
// }
ll counter=0;
for(ll i=0; i < (1<<n);i++)
{
			bool exe=0;

	for(ll j=0; j<subset[i].size();j++)
	{
		for(ll king = j+1; king<subset[i].size();king++)
		{
			for(ll final =0; final <m;final++)
			{
				if(subset[i][j]==v[final].first && subset[i][king] == v[final].second)
				{
					exe =1;
					break;
				}
			}
		}
	}
		if(!exe)
		{
			for(ll final =0; final<subset[i].size();final++)
			{
			//	cout<<subset[i][final]<<" ";
			}
			counter++;		
		//	cout<<endl;
		}
}
cout<<counter<<endl;
}

