/**
 * 59A
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
ll c1=0;
ll c2=0;
ll n = s.length();
for0(i,n)
{
	if(isupper(s[i]))
		c1++;
	else
		c2++;
}
if(c1>c2)
transform(s.begin(),s.end(),s.begin(),::toupper);
else
transform(s.begin(),s.end(),s.begin(),::tolower);
cout<<s<<endl;
}