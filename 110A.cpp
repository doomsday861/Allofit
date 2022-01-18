/**
 * 110A
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
string s;
cin>>s;
ll c=0;
for(auto x:s)
{
	if(x=='4' || x=='7')
		c++;
}
if(c==4 || c==7)
{
	cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
}