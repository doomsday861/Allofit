/**
 * NCOPIES
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
ll solve1(ll m,vector<char>&s, ll n){
    ll cnt =0;
        for1(i,n)
        {
            if(s[i]!='0')break;
            cnt++;
        }
        for(ll i = n;i>=1;i--)
        {
            if(s[i]=='1')break;
            cnt++;
        }
    return cnt+1;
}
int main()
{
    run
testcase{
    ll n,m;
    cin>>n>>m;
    string r;
    cin>>r;
    vector<char>s(n+1);
    for1(i,n)
    {
        s[i] = r[i-1];
    }
    ll zc=0;
    for1(i,n)
    {
        if(s[i]=='1')zc++;
    }
    if(zc==0)
    {
        cout<<n*m<<endl;
        continue;
    }
    if((zc*m)&1)
    {
        cout<<0<<endl;
        continue;
    }
    ll cnt =0;
    if(m&1^1)
    {
        cout<<solve1(m,s,n)<<endl;
        continue;
    }
    else
    {
        ll pre =0;
        for1(i,n)
        {
            if(s[i]=='1')
            pre++;
            if(pre==zc/2)
            cnt++;
        }
        cout<<cnt<<endl;
    }
    
}

    return 0;
}
