	/**
 * 1324 B div 3
 * Kartikeya (doomsday861)
 * 
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
/*bool palin(ll ar[], ll n)
{
	ll a[n];
	memcpy(a,ar,n*(sizeof(ll)));
	reverse(a,a+n);
	for(ll i =0; i < n ; i++)
	{
		if(a[i]!=ar[i])
		{
			return false;
		}
	}
	return true;
}*/
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
 testcase
  { 
  	bool f=0;
  	ll n;
	cin >> n;
	ll ar[n];
	for(ll i =0 ; i < n; i++)
	{
		cin >> ar[i];
	} 
	if(n==1)
	{
		cout<<"YES"<<endl;
		continue;
	}
	if(n==2)
	{
		if(ar[0]==ar[1])
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
		continue;
	}
	for(ll i=0 ; i < n ;i++)
	{
		for(ll j =i+2;j<n;j++)
		{
			if(ar[i]==ar[j])
				{
					f=1;
					break;
				}
		}
		if(f)
			break;
	}
	if(f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
//timee
    return 0;  
}