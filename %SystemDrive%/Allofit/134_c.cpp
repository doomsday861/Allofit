/**
 * exceptional handling atcoder 134_C
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool sorter(pair<ll,ll> a, pair<ll,ll> b)
{
	if(a.first > b.first)
		return true;
	if(a.first == b.first)
		{
			if(a.second > b.second)
				return true;
			else
				return false;
		}	
	else
		return false;
}
void solve0()
{
ll n;
cin>>n;
vector<ll> bro(n);
ll maxi =INT_MIN;
ll secmax = INT_MIN;
ll maxrec = 0;
bool twocount=0;
for(ll i=0 ; i < n;i++)
{
	cin>>bro[i];
		if(bro[i] > maxi)
	{
		secmax = maxi;
		maxi = bro[i];
		maxrec = i;
	}
}
ll counter=0;
for (ll i=0; i < n;i++)
{
	if(bro[i]==maxi)
		counter++;
	if(bro[i]!= maxi)
	{
		secmax = max(bro[i],secmax);
	}
}
if(counter>1)
twocount =1;
for(ll i=0; i<n;i++)
{
	if(i==maxrec)
		{
			if(twocount)
				cout<<maxi<<endl;
			else
			cout<<secmax<<endl;
		}
	else
	{
		cout<<maxi<<endl;
	}
}

}
void solve1()
{
	ll n;
cin>>n;
vector<ll> bro(n);
vector<pair<ll,ll>> v(n);
for(ll i=0; i <n;i++)
{
	cin>>v[i].first;
	v[i].second = i;
	bro[i] = v[i].first;
}
sort(v.begin(),v.end(),sorter);
for(ll i=0; i <n;i++)
{
	//cout<<v[i].first<<" "<<v[i].second<<endl;
	if(v[0].first==bro[i] && v[0].second == i)
	{
		cout<<v[1].first<<endl;
	}
	else
		cout<<v[0].first<<endl;
}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve0();
}