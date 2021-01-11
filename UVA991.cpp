/**
 *SAFE SALUTATIONS UVA 991 / 993
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
ll cat[1111];
cat[0] =1;
cat[1] = 1;
for(ll i=2;i <=1000;i++)
{
	cat[i] = 0;
 for(ll j=0;j<i;j++)
 {
 	cat[i] += (cat[j] * cat[i-j-1]);
 	if(cat[i]>=1000000)
 		cat[i] %=1000000;
 }
}
ll n;
vector<ll> ans;
while(cin>>n)
{
	ans.push_back(cat[n]);
}
for(ll i=0; i <ans.size();i++)
{
	cout<<ans[i]<<endl;
	if(i!=ans.size()-1)
		cout<<endl;
}
}