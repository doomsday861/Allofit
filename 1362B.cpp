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
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for0(i,n)
    {
        ll x;
        cin>>x;
        mp[x] = 1;
    }
    bool f=0;
    for(ll k=1;k<=1024;k++)
    {      
        f=0;
        for(auto x:mp)
        {
            if(mp.find(x.first^k)==mp.end())
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<k<<endl;
            break;
        }
    }
    if(f)
        cout<<-1<<endl;
}

    return 0;
}
