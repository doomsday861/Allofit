/**
 * atharva sir
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
int n;
cin>>n;
string ans="";
int start =0;
int end = 0;
stack<pair<char,int>>st;
for(int i=0;i<s.length();i++)
{
    if(!st.empty() && st.top().first==s[i])
    {
        st.top().second++;
    }
    else
        st.push({s[i],1});
}
while(!st.empty())
{
    if(st.top().second==n)
    {
        st.pop();
        continue;
    }
    ans.append(st.top().second,st.top().first);
    st.pop();
}
reverse(bend(ans));
cout<<ans;
}
