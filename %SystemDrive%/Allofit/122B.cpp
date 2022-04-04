/**
 * PROBLEM
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

string s;
cin>>s;
ll f=0;
ll sv=0;
for(auto x:s)
{
    if(x=='4')f++;
    if(x=='7')sv++;
}
if(f ==0 && sv==0)
cout<<-1;
else if(sv>f)
cout<<7;
else
cout<<4;

    return 0;
}
