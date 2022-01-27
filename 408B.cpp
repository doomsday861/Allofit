/**
 * 408B
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
int main()
{
    run
string s,t;
cin>>s>>t;

vll v1(26,0);
vll v2(26,0);
for(auto x:s)
    v1[x-'a']++;
for(auto x:t)
    v2[x-'a']++;

ll ans=0;
for0(x,26)
{
    if(v2[x]==0)
        continue;
    else if(v1[x]==0)
    {
        ans=0;
        break;
    }
    else
    {
        ans+=min(v1[x],v2[x]);
    }
}
if(ans==0)
cout<<-1;
else
cout<<ans;


    return 0;
}
