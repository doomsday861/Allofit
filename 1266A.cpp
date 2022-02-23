/**
 * 1266A
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
#define bend(x) x.begin(),x.end()
using namespace std;
bool is3(string s)
{
	ll sum=0;
	for(auto x:s)
	{
		sum +=x-'0';
	}
	return (sum%3==0);
}
bool is2(string s)
{
	ll counter=0;
	ll zcounter=0;
	for(auto x:s)
	{
		if((x-'0')&1^1)
			counter++;
		if(x-'0' == 0)
			zcounter++;
	}
	// cout<<counter<<" "<<zcounter<<endl;
	return (counter>=2 && zcounter>=1);
}
int main()
{
    run

    
 testcase
  {
  	string s;
  	cin>>s;
  	//cout<<is3(s)<<" "<<is2(s)<<endl;
  	if(is3(s) && is2(s))
  	{
  		cout<<"red"<<endl;
  	}
  	else
  		cout<<"cyan"<<endl;

}
   
    return 0;
}