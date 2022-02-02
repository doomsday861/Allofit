/**
 * DIVREC
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
pair<ll,ll> sod(ll n)
{
    ll ans =0;
    ll gcd = n;
        int i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0)
            {
                ans+=i;
                gcd = lcm(gcd,i);
            }
    }
    if (i - (n / i) == 1) {
        i--;
    }
    for (; i >= 1; i--) {
        if (n % i == 0)
            {
                ans +=n / i;
                gcd = lcm(gcd,n/i);
            }
    }
    pair<ll,ll> ret = {ans,gcd};
    return ret;
}
int main()
{
    run
    testcase{
        ll x,a,b;
        cin>>x>>a>>b;
        ll temp = x*(b);
        temp/=a;
        pair<ll,ll> p = sod(temp);
       // cout<<" "<<temp<<p.fi<<" "<<p.se<<endl;
        if(p.fi == x)
        {
            cout<<temp<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
