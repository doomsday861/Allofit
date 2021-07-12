/**
 * 233A 
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
ll ar[n+1];
if(n&1)
{
	cout<<-1;
	return 0;
}
for(ll i=1; i <=n;i+=2)
{
	ar[i] = i+1;
	ar[i+1] = i;
}
for(ll i=1;i<=n;i++)
	cout<<ar[i]<<" ";
   
return 0;

}