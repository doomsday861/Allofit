/**
 * 1673B
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
vll setter(string s)
{
    vll f(26,0);
    for(auto x:s)
        f[x-'a']++;
    return f;
}
int main()
{
    run
testcase{
    string s;
    cin>>s;
    unordered_set<char>all;
    for(auto x:s)
        all.insert(x);
    bool f=0;
    vll freq(26,0);
    ll diff=0;
    for(int i=0; i <s.length();i++)
    {
        if(s[i]!=s[i%all.size()])
            f=1;
    }
    if(f)
    cout<<"NO";
    else
    cout<<"YES";        
    cout<<endl;
}

    return 0;
}
