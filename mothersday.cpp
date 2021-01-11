/**
 * Mother's day
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool primcheck(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return true;
	}
	return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int l;
cin>>l;
string s;
cin >>s;
int ar[l];
string n;
int prime[l];
int comp[l];
int primc =0;
int comc=0;
for(int i=0;i<l;i++)
{
	ar[i]= s[i];
	if(primcheck(ar[i]))
		{	
			prime[primc] = ar[i];
			primc++;
		}
	else
	{
		comp[comc] = ar[i];
		comc++;
	}
}
char ans[l];
sort(prime,prime+primc);
for(ll i=0;i<primc;i++)
ans[i] = prime[i];
sort(comp,comp+comc,greater<int>());
for(ll i=0;i<comc;i++)
ans[primc+i] = comp[i];
for(ll i=l-1;i>=0;i--)
cout<<ans[i];
}