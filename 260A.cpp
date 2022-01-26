/**
 * 260A
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

 ll a,b,n;
 cin>>a>>b>>n;
 string s = to_string(a);
 bool cont=0;
 ll tl=0;
 for1(i,n)
 {
 	bool f=0;
 	for0(j,10)
 	{
 		string temp = s;
 		temp += j+'0';
 		if(stoll(temp)%b ==0)
 		{
 			f=1;
 			s = temp;
 			break;
 		}
 	}
 	if(!f)
 		{
 			cout<<-1;
 			return 0;
 		}
 	if(s[i]=='0')
 	{
 		tl=i;
 		cont=1;
 		break;
 	}
 }
// cout<<tl<<endl;
 if(cont)
 {
 	while(tl!=n)
 	{
 		s +='0';
 		tl++;
 	}
 }
 cout<<s;
   

    return 0;
}