/**
 * 313B
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
    ll m;
    cin>>m;
    vll pre(s.length());
    pre[0] =1;
    for(ll i=1;i<s.length();i++)
    {
    	if(s[i]==s[i-1])
    		pre[i]+=pre[i-1]+1;
    	else
    		pre[i] = pre[i-1];
    }
    // for(auto x:pre)
    // 	cout<<x<<" ";
    // cout<<endl;
    for0(i,m)
    {
    	ll a,b;
    	cin>>a>>b;
    	cout<<pre[b-1]-pre[a-1]<<endl;
    }
   

    return 0;
}