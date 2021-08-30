#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int get_hash(string str)
{
    ll p =31;
    ll res =0;
    ll mod = 1000000007;
    for(int i=0; i< str.length();i++)
    {
        res +=((str[i]-'a' +1)*(p%mod))%mod;
        res %=mod;
        p *=31;
        p %=mod;
    }
    return res%mod;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
string s;
cin>>s;
string ans;
unordered_set<char> st;
bool ar[26] = {0};
for(int i=s.size()-1; i>=0; i--)
{
    if(!ar[s[i]])
    {
        ans.push_back(s[i]);
        ar[s[i]] = 1;
    }
}
reverse(ans.begin(),ans.end());
cout<<ans<<endl;
cout<<get_hash(ans);

    return 0;
}