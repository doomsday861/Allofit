/**
 * OPTSORT
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
 testcase
 {
 	ll n;
 	cin>>n;
 	vector<ll>v(n);
 	for(ll i=0; i < n;i++) cin>>v[i];
 	ll lp=1;
 	ll rp =n;
 	bool fr=0;
 	bool fl=0;
 	while(!fr && !fl)
 	{
 		if(!fr)
 		{
 			if(v[rp-1]!=rp)
 			{
 				fr =1;
 			}
 			else
 				rp--;
 		}
 		if(!fl)
 		{
 			if(v[lp-1]!=lp)
 			{
 				fl=1;
 			}
 			else
 				lp++;
 		}
 	}
 	ll maxi =INT_MIN;
 	ll mini =INT_MAX;
 	for(ll i=lp-1;i<=rp-1;i++)
 	{
 		maxi = max(maxi,v[i]);
 		mini = min(mini,v[i]);
 	}
 	//cout<<lp<<" "<<rp<<endl;
 	cout<<maxi-mini<<endl;
}
    return 0;
}