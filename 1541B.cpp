/**
<<<<<<< Updated upstream
 * 1541B retry
=======
 * 1541B 
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
#define bend(x) x.begin(),x.end()
=======
>>>>>>> Stashed changes
using namespace std;
int main()
{
    run
<<<<<<< Updated upstream

    
 testcase
  {
    ll n;
    cin>>n;
    vll v(n+1);
    for1(i,n) cin>>v[i];

    ll ans=0;
    for1(i,n)
    {
        for(ll j=v[i]-i; j<=n;j+=v[i])
        {
            if(j>=0)
            {
                //cout<<j<<" ";
                if(v[i]*v[j] == i+j && i<j)
                    ans++;
        }
    }
}
    cout<<ans<< endl;
}
   
=======
vector<vector<ll>> v(200003);
for1(i,200002)
{
    for1(j,sqrt(i))
    {
        if(i%j==0)
        {
            if(i/j==j)
            {
                v[i].pb(j);
            }
            else
            {
                v[i].pb(j);
                v[i].pb(i/j);
            }
        }
    }
}
 testcase
  {
  	ll n;
  	cin>>n;
  	ll ans=0;
    vll v1(n);
    map<ll,ll> mp;
  	for0(i,n){
     cin>>v1[i];
     mp[v1[i]] = i+1;
    }
    ll mini = 3;
    ll maxi = 2*n -1;
    for(ll i=mini; i<=maxi;i++)
    {
        for(ll j=0; j< v[i].size();j++)
        {
            if(mp.find(v[i][j])!=mp.end() && mp.find(i/v[i][j])!=mp.end() && mp[v[i][j]] < mp[i/v[i][j]] && v[i][j] != (i/v[i][j]) && ((mp[v[i][j]] + mp[i/v[i][j]]) == (v[i][j]*(i/v[i][j]))))
            {
                ans++;
                //WHAT THE FUCK.
            }
        }
    }
    cout<<ans<<endl;
   }
>>>>>>> Stashed changes

    return 0;
}