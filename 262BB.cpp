/**
 * CODEFORCES 262B
 * Kartikeya (doomsday861)
**/
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

ll n,k;
cin >> n>>k;
ll ar[n];
for(ll i=0; i<n;i++) cin>>ar[i];
ll s=0;
for(ll i=0;i<n,k>0; i++)
{
	if(ar[i]<0)
	{
		ar[i] *= -1;
		k--;
	}
	else
			break;
}
	sort(ar,ar+n);
	if(k>0)
	{
		if(k&1)
			ar[0] *=-1;

	}
for( ll i=0; i <n;i++) s+=ar[i];
cout<<s<<endl;
}
