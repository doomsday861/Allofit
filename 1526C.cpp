/**
 * 1526C
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
ll n;
cin>>n;
vll v(n);
for0(i,n) cin>>v[i];
ll h=0;
ll ans=0;
multiset<ll> s;
for0(i,n)
{
    h +=v[i];
    s.insert(v[i]);
    while(h<0)
    {
        h -= *s.begin();
//        cout<<*s.begin()<<endl;
        s.erase(s.begin());
        ans++;
    }
}
cout<<n-ans;

    return 0;
}
