//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
ll T;
freopen("in.txt","r",stdin);
freopen("output.ans","w",stdout);
//auto start = high_resolution_clock::now(); 
cin>>T;
while(T--)
  { 	
	ll n;
	cin >> n;
	char q[n];
	char a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>q[i];
	}
	ll count =0;
	for(ll i=0;i<n;i++)
	{
		cin >> a[i];
		
		if(a[i]==q[i])
		count++;
	}
	ll m[n+1];
	for(ll i=0;i<=n;i++)
	{
		cin >> m[i];
	}
	ll max = m[0];
	if(count==n)
	{
		cout<<m[count]<<endl;
		continue;
	}
	for(ll i=0;i<=count;i++)
	{
		if(max<m[i])
		{
			max = m[i];
		}
	}
	cout << max<<endl;
	
}
}
