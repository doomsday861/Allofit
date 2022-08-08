/**
 * 1702D
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
testcase{
    string s;
    cin>>s;
    ll k;
    cin>>k;
    ll curscore =0;
    map<char,ll>mp;
    for(int i=0;i<26;i++)
    {
        mp[i+'a'] =0;
    }
    string st = s;
    sort(bend(st));
    for(auto c : st)
    {
        if(curscore + (c-'a' +1) <=k)
        {
            mp[c]++;
            curscore += c-'a'+1;
        }
    }
    for(auto c:s)
    {
        if(mp[c]>0)
        {
            cout<<c;
            mp[c]--;
        }
        
    }
    cout<<endl;
}

    return 0;
}
