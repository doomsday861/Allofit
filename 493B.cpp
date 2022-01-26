/**
 * 493B
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
using namespace std;
int main()
{
    run
vll v1;
vll v2;
ll n;
cin>>n;
ll s=0;
ll ls =0;
while(n--)
{
    ll x;
    cin>>x;
    s +=x;
    if(x>0)
       {
        v1.pb(x);
        ls = 1;
    }
    else
       {
        v2.pb(x*-1);
        ls =2;
    }
}
// for(auto x: v1)
// cout<<x<<" ";
// cout<<endl;
// for(auto x:v2)
//     cout<<x<<" ";
//     cout<<endl; 
if(s>0)
{
    cout<<"first";
    return 0;
}
if(s<0)
{
    cout<<"second";
    return 0;
}
if(s==0)
{
    if(v1.size()>v2.size())
    {
        for(ll i=0; i <v2.size();i++)
        {
            if(v2[i]>v1[i])
            {
                cout<<"second";
                return 0;
            }
            if(v1[i] > v2[i])
            {
                cout<<"first";
                return 0;
            }
        }
        cout<<"first";
        return 0;
    }
    if(v1.size()<v2.size())
    {
        for(ll i=0; i <v1.size();i++)
        {
            if(v2[i]>v1[i])
            {
                cout<<"second";
                return 0;
            }
            if(v1[i] > v2[i])
            {
                cout<<"first";
                return 0;
            }
        }
        cout<<"second";
        return 0;
    }
    if(v1.size()==v2.size())
    {
        for(ll i=0; i <v1.size();i++)
        {
            if(v2[i]>v1[i])
            {
                cout<<"second";
                return 0;
            }
            if(v1[i] > v2[i])
            {
                cout<<"first";
                return 0;
            }
        }
        if(ls==1)
            cout<<"first";
        else
            cout<<"second";
    }    
}

    return 0;
}
