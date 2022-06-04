/**
 * 1678C
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
testcase{
    ll n;
    cin>>n;
    vll v(n);
    for0(i,n)
    cin>>v[i];
    ll valuesgreaterthani =0;
    ll valueslessthanj =0;
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        valuesgreaterthani=0;
        valueslessthanj=0;
        for(ll j=i+1;j<n;j++)
        {
            for(ll k=j+1;k<n;k++)
            {
                if(v[i]>v[k])
                    {
                        valuesgreaterthani++;
                        continue;
                    }
                if(v[j]>v[k] && valuesgreaterthani>=1)
                {
                    count++;
                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    cout<<count<<endl;
}

    return 0;
}
 

