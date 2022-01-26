/**
 * 58B
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
vector<ll> v(1000002,0);

int main()
{
    ll n;
    cin>>n;
    ll p=0;
    while(1)
    {   
        p = n;
        for(ll i=2; i<=p;i++)
        {
            if(p%i==0)
            {
                cout<<p<<" ";
                p /=i;
                break;
            }
        }
        if(p==n)
            break;
        n = p;
    }
    cout<<1;

    return 0;
}
