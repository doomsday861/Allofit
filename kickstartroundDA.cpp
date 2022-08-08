/**
 * kick round 2 D
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
    ll cnt=1;
testcase{
    double n,m;
    cin>>n>>m;
    vll v(n);
    ll sum=0;
    for0(i,n)
    {
        cin>>v[i];
        sum +=v[i];
    }
    sort(bend(v),greater<ll>());
    sum=0;
    double ans =0;
    double count =0;
    vll f;
    for0(i,n)
    {
        if(m==1)
        {
            f.pb(v[i]);
            count++;
        }
        else
        {
            ans += v[i];
            m--;
        }
    }
    sort(bend(f));
//    cout<<ans<<endl;
    if(f.size()&1)
    {
        ans += f[f.size()/2];
    }
    else
    {
        ll cursum = f[f.size()/2]+ f[f.size()/2-1];
        ans += cursum/(2*1.0);
    }
    cout<<fixed;
    cout<<setprecision(7);
    cout<<"Case #"<<cnt++<<": "<<ans<<endl;
}
    return 0;
}
