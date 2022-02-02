/**
 * abc237D
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
    string s;
    cin>>s;
    deque<ll> q;
    q.pb(n);
    for(ll i = n-1; i>=0;i--)
    {
        if(s[i] == 'L')
            q.push_back(i);
        else
            q.push_front(i);
    }
    for(auto x:q)
        cout<<x<<" ";

    return 0;
}
