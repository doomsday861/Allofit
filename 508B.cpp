/**
 * 508B
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    run

string s;
cin>>s;
ll mineve =9;
ll mini =0;
bool f=0;
vll v;
for0(i,s.length())
{
	if((s[i]-'0')%2==0)
	{
		f=1;
		if(s[i]-'0' < s[s.length()-1]-'0')
		{
			swap(s[i],s[s.length()-1]);
			cout<<s;
			return 0;
		}
	}
}
for(ll i = s.length()-1;i>=0;i--)
{
		if((s[i]-'0')%2==0)
	{
	if((s[i]-'0') > s[s.length()-1]-'0')
	{
		swap(s[i],s[s.length()-1]);
		cout<<s;
		return 0;
	}
}
}
cout<<-1;

}