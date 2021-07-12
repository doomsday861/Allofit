/**
 * LAB EX 4 
 *191B138 4.1
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
ll n;
cin>>n;
ll ar[n];
for(ll i=0;i<n;i++)
{
	cin >>ar[i];
}
sort(ar,ar+n);
ll x =0;
ll y=0;
ll m=99999999;
for(ll i=0; i < n-1; i++)
{
	if(abs(ar[i]-ar[i+1]) < m)
	{
		x = ar[i];
		y = ar[i+1];
		m = abs(ar[i]-ar[i+1]);
	}

}
cout<<x<<" "<<y<<endl;


    return 0;

}




4.2 




/**
 * LAB EX 4 
 *191B138 4.2
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
ll n;
cin>>n;
ll ar[n];
for(ll i=0;i<n;i++)
{
	cin >>ar[i];
}
ll n2;
cin >>n2;
ll arr[n2];
for(ll i=0;i <n2;i++)
{
	cin>>arr[i];
}
ll x;
cin>>x;
for(ll i=0; i<n;i++)
{
	for(ll j=0; j<n2;j++)
	{
		if(ar[i]+arr[j] == x)
		{
			cout<<i+1<<" "<<j+1<<endl;
			return 0;
		}
	}
}
cout<<"NO"<<endl;
    return 0;

}


4.3


/**
 * LAB EX 4 
 *191B138 4.3	
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
ll n;
cin>>n;
ll ar[n];
for(ll i=0;i<n;i++)
{
	cin >>ar[i];
}
ll maxi= INT_MIN;
ll maxs=INT_MIN;
ll x,y;
x=0;
y=0;
for(ll i=0; i<n;i++)
{
	maxi = max(maxi+ar[i],ar[i]);
	if(ar[i]>maxi+ar[i])
	{
		x =i;
		y =i;
	}
	if(maxi+ar[i]>ar[i] && maxi > maxs)
	{
		y++;
	}
	maxs = max(maxi,maxs);
}
cout<<maxs<<endl;
cout<<x+1<<" "<<y+1<<endl;
return 0;
}