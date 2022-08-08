/**
 * concat sort
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
    vll v(n);
    vll v2(n);
    for0(i,n)
    {
        cin>>v[i];
        v2[i] = v[i];
    }
    sort(bend(v2));
    if(n==2)
    {
        cout<<"YES"<<endl;
        continue;
    }
    vll x;
    vll y;
    ll i =0;
    for0(j,n)
    {
        if(v[j]==v2[i])
        {
            x.pb(v[j]);
            i++;
        }
        else
            y.pb(v[j]);
    }
    if(is_sorted(bend(y)))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    
    
   
}

    return 0;
}
// 0 0 0 1 1 3