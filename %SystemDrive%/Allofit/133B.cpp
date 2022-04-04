/**
 * 133B
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
map<char,string> mp;
mp['>'] = "1000";
mp['<'] = "1001";
mp['+'] = "1010";
mp['-'] = "1011";
mp['.'] = "1100";
mp[','] = "1101";
mp['['] = "1110";
mp[']'] = "1111";
string s;
cin>>s;
ll ans=0;
for(auto x:s)
    {
        ans *=16;
        ans +=stoll(mp[x],nullptr,2);
        ans %=1000003;
    }
    
cout<<ans;

    return 0;
}
