/**
 * q2
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
for0(i,n)
cin>>v[i];
int cur =v[0];
bool f=0;
for(int i =0; i <(n+1)/2;i++)
{
    if(!f)
    {
        if(cur>v[n-i-1])
    {
            cout<<"no";
            return 0;
        }
        cur = v[n-i-1];
        f=1;
        continue;
    }
    if(f)
    {
        if(cur>v[i])
        {
            cout<<"no";
            return 0;             
       }
       cur = v[i];
        f=0;
    }
}
cout<<"yes";

    return 0;
}
