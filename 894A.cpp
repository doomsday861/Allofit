/**
 * 894A
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
int main()
{
    run

   string s;
   cin>>s;
   vll v(s.length(),0);
   // if(s[0]=='Q')
   // 	v[0] = 1;
   // for1(i,s.length()-1)
   // {
   // 	if(s[i]=='Q')
   // 		v[i] = v[i-1]+1;
   // 		else
   // 		v[i] = v[i-1]; 
   // }
   // vll v1(s.length(),0);
   // if(s[s.length()-1]=='Q')
   // {
   // 	v1[s.length()-1]=1;
   // }
   // for(ll i= s.length()-2;i>=0;i--)
   // {
   // 	if(s[i]=='Q')
   // 	{
   // 		v1[i] = v1[i+1]+1;
   // 	}
   // 	else
   // 		v1[i] = v1[i+1];
   // }
   // for0(i,s.length())
   // {
   // 		cout<<v[i]<<" ";
   // }
   // cout<<endl;
   //    for0(i,s.length())
   // {
   // 		cout<<v1[i]<<" ";
   // }
   // cout<<endl;
   // ll ans=0;
   // for1(i,s.length()-1)
   // {
   // 	if(s[i]=='A')
   // 	{
   // 		if(v[i]==0 ||v1[i]==0)
   // 		{
   // 			continue;
   // 		}
   // 		else
   // 		{
   // 			ans +=max(v[i],v1[i]);
   // 		}
   // 	}
   // }
   ll ans=0;
   for0(i,s.length())
	{
		if(s[i]=='Q')
		for(ll j=i+1;j<s.length();j++) 
		{
			if(s[j]=='A')
			{
				for(ll k=j+1;k<s.length();k++)
				{
					if(s[k]=='Q')
						ans++;
				}
			}
		}
	}

      	cout<<ans;

    return 0;
}