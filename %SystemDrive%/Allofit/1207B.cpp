//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
ll n,m;
cin >> n >>m;
ll ar[n][m];
for(ll i=0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		ar[i][j]=0;
	}
}
ll zc=0;
for(ll i =0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		cin >> ar[i][j];
		if(ar[i][j]==0)
		zc++;
	}
}
//ll oc = (n*m)-zc;
bool f =0;
if(zc== n*m)
{
	cout << 0 <<endl;
	return 0;
}
ll b[n][m];
for(ll i=0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		b[i][j]=0;
	}
}
ll count=0;
vector<ll> x;
for(ll i =0;i<n-1;i++)
{
	for(ll j =0;j<m-1;j++)
	{		
			if(ar[i][j]==1 && ar[i+1][j]== 1 && ar[i][j+1] == 1 && ar[i+1][j+1] == 1)
			{
				b[i][j]=b[i+1][j]=b[i][j+1]=b[i+1][j+1]=1;
			 x.push_back(i+1);
			 x.push_back(j+1);
			 x.push_back(-1);
			 count++;
	}
}
}
for(ll i =0;i<n;i++)
{
	for(ll j =0;j<m;j++)
	{
		if(ar[i][j]!=b[i][j])
		{
			f=1;
			break;
		}
	}
}
if(f)
{
	cout << -1 <<endl;
	return 0;
}
cout<<count<<endl;
 for(ll i =0;i<x.size();i++)
 {
	 if(x[i]==-1)
	 cout<<endl;
	 else if(x[i+1]!=-1)
	 cout<<x[i]<<" "<<x[i+1];
 }
return 0; 
} 
