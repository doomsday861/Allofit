/**
 * DIFFMED
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
    deque<int>q;
    bool f =0;
    ll l = 1;
    ll r = n;
    while(l<=r)
    {
       if(l<=n and f)
       {
         cout<<l<<" ";
         f=0;
         l++;
       }
       else if(r>0 and !f)
       {
        cout<<r<<" ";
        f=1;
        r--;
       }
    }
    cout<<endl;
}

    return 0;
}
