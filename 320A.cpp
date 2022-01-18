/**
 * 320A
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

string s;
cin>>s;
bool f=0;
for0(i,s.length())
{
	if(s[i]=='1')
		{
			if(i<=s.length()-3 && s[i+1] == '4' && s[i+2] == '4')
			{
				i+=2;
			}
			else if(i<=s.length()-2 && s[i+1] == '4')
			{
				i++;
			}
		}
		else
			f=1;
}
if(f)
	cout<<"NO";
else
	cout<<"YES";

    return 0;
}