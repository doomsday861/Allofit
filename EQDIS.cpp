/**
 * eqdis
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
    unordered_map<int,int>mp;
    ll n;
    cin>>n;
    bool f=0;
    for0(i,n)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll s1,s2;
    s1=0;s2=0;
    // for(auto x:mp)
    // {
    //     if(x.se >2){
    //         f=1;
    //         break;
    //     }
    //     if(x.se==2)
    //     {
    //         s1++;
    //         s2++;
    //     }
    //     if(x.se==1)
    //     {
    //         if(s1>s2)
    //         {
    //             s2++;
    //         }
    //         else
    //             s1++;
    //     }   
    // }
    if(n&1 and ((n-mp.size())==0))
    {
        cout<<"NO\n";
    }
    else
        cout<<"YES\n";
}

    return 0;
}
