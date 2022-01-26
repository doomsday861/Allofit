/**
 * 507B
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

 ll r,x,y,x1,y1;
 cin>>r>>x>>y>>x1>>y1;
 double dis = ((x1-x)*(x1-x))+((y1-y)*(y1-y));
 dis = sqrt(dis);
 double ans =  ceil((double)dis/((2*r)*1.0));
 cout<<ans;
   

    return 0;
}