/**
 * 1650B
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
bool ok(ll x, ll r)
{
    if(x<=r)
        return 1;
    return 0;
}
int main()
{
    run

    
 testcase
  {
  	ll l,r,a;
  	cin>>l>>r>>a;
  	ll x = (r+1)/a;
  	ll u = a*x;
  	u--;
    if(u<l || u>r)
        u= r;
    //cout<<y<<endl;
    // if(u<l)
    // {
    //     ll low =l;
    //     ll high =r;
    //     while(low<high)
    //     {
    //         ll mid =(low+high)/2;
    //         if(ok(mid,r))
    //         {
    //             low = mid+1;
    //         }
    //         else
    //             high = mid-1;
    //     }
    //     u = low;

    //     //cout<<"u = "<<u<<endl;
    // }
    //cout<<u<<endl;
    //ll z = (r/x)+(r%a);
    //cout<<z<<endl;
  	ll ans = (u/a)+(u%a);
    cout<<ans<<endl;
}
   

    return 0;
}