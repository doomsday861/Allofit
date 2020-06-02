#include<bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<int,int> &a,  
              const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
}
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>>a;
	vector<pair<int,int>>b;
	vector<pair<int,int>>c;
	vector<pair<int,int>>d;
	int ar1[n];
	int ar2[n];
	int ar3[n];
	int ar4[n];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0)
			{
				int x;
				cin>>x;
				a.push_back(make_pair(x,j));
				cin>>ar1[j];
			}
			if(i==1)
			{
				int x;
				cin>>x;
				b.push_back(make_pair(x,j));
				cin>>ar2[j];

			}
			if(i==3)
			{
				int x;
				cin>>x;
				c.push_back(make_pair(x,j));
				cin>>ar3[j];
			}
			if(i==4)
			{
				int x;
				cin>>x;
				d.push_back(make_pair(x,j));
				cin>>ar4[j];
			}
		}
	}
	sort(a.begin(),a.end(),sortinrev);
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<a[i].first<<" "<<a[i].second<<endl;
	// }
	int ans = INT_MIN;
	for(int i=n-1;i>=0;i--)
	{	int temp;
		for(int j=0;j<i;j++)
		{	
			// cout<<a[i].first<<" "<<a[i].second<<" "<<a[j].first<<" "<<a[j].second;
			// temp = abs(a[i].first - a[j].first) + abs(b[a[i].second].first-b[a[j].second].first) + abs(c[a[i].second].first-c[a[j].second].first) + abs(d[a[i].second].first-d[a[j].second].first) + abs(a[i].second - a[j].second);
			temp = abs(ar1[i]-ar1[j]) + abs(ar2[i]-ar2[j])
		}
		ans = max(ans,temp);
	}
	cout<<ans<<endl;
}