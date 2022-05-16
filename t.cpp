/**
 * try
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
vll v1,v2,v3,v4;
for0(i,4)
{
    for0(j,n)
    {
        ll x;
        cin>>x;
        if(i==0)
        {
            v1.pb(x);
        }
        if(i==1)
        {
            v2.pb(x);
        }
        if(i==2)
        {
            v3.pb(x);
        }
        if(i==3)
        {
            v4.pb(x);
        }
    }
}
ll k;
cin>>k;
vll sum1,sum2;
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<n;j++)
    {
        sum1.pb(v1[i]+v2[j]);
        sum2.pb(v3[i]+v4[j]);
    }
}
sort(bend(sum1));
sort(bend(sum2));
for(auto x:sum1)
cout<<x<<" ";
cout<<endl;
for(auto x:sum2)
cout<<x<<" ";
cout<<endl;
ll cnt=0;
for(int i=0;i<sum1.size();i++)
{
    for(int j=0;j<sum2.size();j++)
    {
        if(sum1[i]+sum2[j]>k)
            break;
        else
            cnt++;
    }
}
cout<<cnt<<endl;


    return 0;
}
