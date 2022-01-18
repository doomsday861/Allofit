/**
 * 352B 
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
ll n;
cin>>n;
vll v(n);
vector<pair<ll,ll>> ans;
vll vi(100005,0);
bool ap[100005] = {0};
map<ll,vector<ll>>mpi;
for0(i,n){
 cin>>v[i];
 if(mpi[v[i]].size()!=0)
    {   
        ll x = mpi[v[i]][mpi[v[i]].size()-1] + i;
        mpi[v[i]].pb(x);
    }
    else
        mpi[v[i]].pb(i);
}
// for(auto x:mpi)
// {
//     for(ll i=0; i < x.second.size();i++)
//         cout<<x.se[i]<<" ";
//     cout<<endl;
// }
for(auto x:mpi)
{
   if(x.second.size()==1)
   {
    ans.pb({x.first,0});
   }
   else
   {
    double d = (x.se.size()/2.0);
    ll n1 = x.second.size();
    double d1 = ((x.second[1]-x.second[0])-x.second[0]);
    double sum = d*(2.0*x.second[0] + (n1-1)*d1);
    //cout<<sum<<endl;
    if(sum == x.second[n1-1])
        ans.pb({x.first,d1});
   }
}
cout<<ans.size()<<endl;
for(auto x:ans)
{
    cout<<x.fi<<" "<<x.se<<endl;
}

return 0;
}
