/**
 * 186A
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

string s1,s2;
cin>>s1>>s2;

ll dif =0;
char s1a,s1b,s2a,s2b;
ll counter=0;
if(s1.length()!=s2.length())
{
	cout<<"NO"<<endl;
	return 0;
}
for0(i,s1.length())
{
	if(s1[i]!=s2[i])
	{
		counter++;
		if(counter==1)
		{
				s1a = s1[i];
				s2a = s2[i];
		}
		if(counter==2)
		{
			s2b = s2[i];
			s1b = s1[i];
		}
	}
}
if(counter > 2)
{
	cout<<"NO"<<endl;
}
else if(s1a==s2b && s1b== s2a)
{
	cout<<"YES"<<endl;
}
else
cout<<"NO";
// cout<<s1a<<" "<<s1b<<" "<<s2a<<" "<<s2b<<endl;
    return 0;
}