/**
 * 104A
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
ll n;
cin>>n;
ll x = n-10;
if(x==0)
cout<<0;
else if(x>=1&&x<=9)
cout<<4;
else if(x==10)
cout<<15;
else if(x==11)
cout<<4;
else
cout<<0;

    return 0;
}
