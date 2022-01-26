/**
 * 118A
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
bool isvowel(char c)
{
	return (c=='a'||c=='A'||c=='E'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'||c=='y'||c=='Y');
}
int main()
{
    run

    string s;
    cin>>s;
    string ans="";
    for0(i,s.length())
    {
    	if(isvowel(s[i]))
    		continue;
    	else
    	{
    		cout<<'.';
    		if(isupper(s[i]))
    		{
    			char x = tolower(s[i]);
    			cout<<x;
    		}
    		else
    		{
    			cout<<s[i];
    		}
    	}
    }
    //cout<<ans;
   

    return 0;
}