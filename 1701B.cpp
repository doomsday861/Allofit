/**
 * 1701B
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
    ll n;
    cin>>n;
    cout<<2<<endl;
    ll i = 1;
    unordered_map<ll,ll>mp;
    mp[1]++;
    while(i<=n)
    {
        cout<< i<<" ";
        i*=2;
        mp[i]++;
    }
    for1(i,n)
    {
        if(mp.find(i)==mp.end())
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

    return 0;
}
