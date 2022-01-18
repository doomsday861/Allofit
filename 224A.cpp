/**
 * 224A
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
using namespace std;
int main()
{
    run

ll a,b,c;
cin>>a>>b>>c;
ll s1 = sqrt((a*b)/c);
ll s2 = sqrt((b*c)/a);
ll s3 = sqrt((c*a)/b);
ll ans = 4*(s1+s2+s3);
cout<<ans;
   

    return 0;
}