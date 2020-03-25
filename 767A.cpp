//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
flin
ll n;
cin >> n;
ll ar[n];
ll c[n];
ll maxi=0;
for(ll i =0 ; i < n;i++)
{
	cin >> ar[i];
	c[i]=ar[i];
	maxi = max(ar[i],maxi);
}
sort(c,c+n,greater<ll>());
if(ar[0]==maxi)
{
	cout<<maxi<<endl;
	ar[0]=0;
}
else
{
	cout<<endl;
}
for(ll i = 1 ; i < n; i++)
{	
	if(ar[i]==n-i)
	for(ll j =0 ; j<=i;j++)
	{
		if(c[i]>=ar[i])
		{
			cout<< c[j]<<" ";
			c[j]=0;
		}
	}
	cout<<endl;
}
   return 0; 
} 
