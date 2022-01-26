/**
 * 448B
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
bool automaton(string s,string t)
{
	ll counter=0;
	for0(i,s.length())
	{
		if(counter >= t.length())
			break;
		if(s[i]==t[counter])
			counter++;
	}
	if(counter==t.length())
	{
		return 1;
	}
	return 0;
}
bool arr(string s, string t)
{
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	return s==t;
}
using namespace std;
int main()
{
    run

   string s,t;
   cin>>s>>t;
  if(automaton(s,t))
  {
  	cout<<"automaton";
  	return 0;
  }
  if(arr(s,t))
  {
  	cout<<"array";
  	return 0;
  }
  if(s.length()!=t.length())
  {
  	bool f=0;
  	map<char,ll> mp;
  	for(auto x:s)
  		mp[x]++;
  	for(auto x:t)
  	{
  		if(mp[x]>0)
  			mp[x]--;
  		else
  			f=1;
  	}
  	if(!f)
  	{
  		cout<<"both";
  		return 0;
  	}
  }
  cout<<"need tree";



    return 0;
}