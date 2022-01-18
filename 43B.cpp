/**
 * 43B
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
using namespace std;
int main()
{
    run
map<char,ll> mp;
string s1,s2;
getline(cin,s1);
getline(cin,s2);
for(auto x: s1)
{
	mp[x]++;
}
bool f=0;
for(auto x: s2)
{
	if(x==' ')
		continue;
	if(mp.find(x)==mp.end())
		{
			f=1;
			break;
		}
	else if(mp[x]>0)
		mp[x]--;
	else
	{
		//cout<<x<<endl;
		f=1;
		break;
	}
}
if(f)
	cout<<"NO"<<endl;
else
	cout<<"YES"<<endl;

    return 0;
}