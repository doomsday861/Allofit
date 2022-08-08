/**
 * 1705a
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
    ll n,x;
    cin>>n>>x;
    vll v(2*n);
    for0(i,2*n)
    cin>>v[i];
    sort(bend(v));
    bool f=0;
    for0(i,n)
    {
//        cout<<v[i]<<" "<<v[i+n]<<endl;
      if(v[i]+x>v[i+n])  
      {
        f=1;
        //break;
      }
    }
    if(f)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
// 2:10
    return 0;
}
