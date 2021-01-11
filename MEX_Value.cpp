#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll powi(ll base,ll expo)
{
    base=base%mod;
    ll ans=1;
    while(expo)
    {
        if(expo&1)
            ans=(ans*base)%mod;
        expo>>=1;
        base=(base*base)%mod;
    }
    return ans%mod;
}
int main()
{
    ll t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        ll c=b-a,d=a+b;
        if(n&1)
        {
            cout<<(a*powi(2,ceil(n/2)))%mod<<" "<<(b*powi(2,n/2))%mod<<endl;
        }
        else
        {
            cout<<(c*powi(2,(n/2-1)))%mod<<" "<<(d*powi(2,(n/2)-1))%mod<<endl;
        }
    }
}