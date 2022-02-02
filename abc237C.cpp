/**
 * abc237C
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
bool ispalin(string s)
{
    for(ll i=0;i<=s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-i-1])
            return false;
      // cout<<s[i]<<" "<<s[s.length()-i-1]<<endl;  
    }
    return true;
}
int main()
{
    run

string s;
cin>>s;
string checker="";
ll l=0;
if(ispalin(s))
{
    cout<<"Yes";
    return 0;
}
ll r= s.length()-1;
for(ll i=s.length()-1;i>=0;i--)
{
    if(s[i]!='a')
    {
        r =i;
        break;
    }
}
for(ll i=0; i < s.length();i++)
{
    if(s[i]!='a')
    {
        l = i;
        break;
    }
}
// cout<<s.length()<<endl;
ll fa = l;
ll la = s.length()-r-1;
// cout<<fa<<" "<<la;
if(fa>la)
{
    cout<<"No";
    return 0;
} 
for(ll i= l;i<=r;i++)
{
    checker +=s[i];
}
if(ispalin(checker))
{
    cout<<"Yes";
}
else
cout<<"No"<<endl;

    return 0;
}
