/**
 * posspew codechef
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
    ll n,k;
    cin>>n>>k;
    vll v(n);
    ll sum =0;
    for0(i,n)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum==0)
    {
        cout<<0<<endl;
        continue;
    }
    vll left(n,0);
    vll right(n,0);
    vll time(n,INT_MAX);
    if(v[0]!=0)
        left[0] = 1;
    for1(i,2*n)
    {
        if(v[i%n]!=0)
        {
            left[i%n] = 0;
        }
        else
        {
            left[i%n] = left[(i-1)%n]+1; 
        }
    }
    if(v[n-1]!=0)
        right[n-1] = 1;
    for(ll i = 2*n-1;i>=0;i--)
    {
        if(v[i%n]!=0)
        {
            right[i%n] = 0;
        }
        else
        {
            right[i%n] = right[(i+1)%n]+1; 
        }
    }
    for0(i,n)
    time[i] = min(right[i],left[i]);
    // for(auto x:time)
    //     cout<<x<<" ";
    // cout<<endl;
    for0(i,n)
    {
        //cout<<k-time[i]<<" ";
        sum += 2* max(0LL,k-time[i]);
    }
    
    cout<<sum<<endl;
    
    
}

    return 0;
}
