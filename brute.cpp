/**
 * brute
**/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0; i < n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i <n;i++)
        {
            cin>>b[i];
        }
        ll ans =0;
        for(ll i=0; i <n;i++)
        {
            ll first = a[i];
            ll second = b[i];
            for(ll j = i+1;j <n ;j++)
            {
                if(a[j]==second && b[j]==first)
                    ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
