/**
 * HEIGHTS
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
    for0(i,n)
    cin>>v[i];
    sort(bend(v));
    ll lonely =0;
    unordered_map<ll,ll>mp;
    mp.clear();
    for0(i,n)
    {
        // if(v[i]==v[i+1])
        // {
        //     while(i<n and v[i]==v[i+1])
        //         i++;
        // }
        // else
        //     lonely++;
        mp[v[i]]++;
    }
    ll lonely2=0;
    bool f=0;
    ll maxi =0;
    for(auto x:mp)
    {
        if(x.se == 1)
        {
 //           cout<<x.fi<<" ";
            maxi = max(maxi,x.fi);
            lonely2++;
        }
        if(x.se > 2)
        {
            f =1;
        }
    }   
 //   cout<<endl;
    // double ans = ceil(lonely/2.0);
    // ll ans1 = ((lonely2+1)/2.0);
    //    if(f and lonely2==1)
    //         ans1= 1;
    // cout<<ans1<<endl;
    if(lonely2==1 and maxi!=v[n-1])
    {
        cout<<1<<endl;
    }
    else if(lonely2 == 1 and maxi==v[n-1])
    {
        if(f)
        {
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
    }
    else
    {
        double ans1 = ceil(lonely2/2.0);
        cout<<ans1<<endl;
    }
    
}

    return 0;
}
