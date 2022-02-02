/**
 * 233B
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
ll sod(string s)
{
    ll ans=0;
    for(auto x:s)
    {
        ans +=x-'0';
    }
    return ans;
}
ll check(ll x)
{
    string s = to_string(x);
    ll y = sod(s);
    ll ans = x*x+x*y;
    //cout<<ans<<" ";
    return ans;
}
int main()
{
    run
ll n;
cin>>n;
ll high = 10000000000;
ll low = 1;
ll mid = (high+low)/2;
for0(i,60000)
{
    if(high-low <= 10000)
    {
        for(ll j= low; j<=high;j++)
        {
            if(check(j)==n)
            {
                cout<<j<<endl;
                return 0;
            }
        }
        cout<<-1;
        return 0;
    }
    else
    {
        mid = (high+low)/2;
  //      cout<<mid<<endl;
        if(check(mid)==n)
        {
 //           cout<<mid;
            return 0;
        }
        else if(check(mid) > n)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
}
cout<<-1;

    return 0;
}
