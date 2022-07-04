/**
 * segfault
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
    vector<ll>v(n,0);
    ll diff[n+2];
    bool nottheif[n+2];
    memset(diff,0,sizeof(diff));
    memset(nottheif,0,sizeof(nottheif));
    vector<pair<int,int>>vp;
    for0(i,n)
    {
        ll x,y;
        cin>>x>>y;
        if(x<=(i+1)and y>=(i+1))
        {
            nottheif[i+1] = 1;
        }
        vp.pb({x,y});
        diff[x]+=1;
        diff[y+1] -=1;
        //cout<<i<<" "<<nottheif[i]
    }
    ll maxi=INT_MIN;
    for0(i,n+1)
    {
        if(i==0)
            v[i] = diff[i];
        else
            v[i] = v[i-1] + diff[i];
        if(nottheif[i])
            continue;
        maxi = max(maxi,v[i]);
    }
    set<int>st;
    st.clear();
   // cout<<maxi<<endl;
    for1(i,n)
    {
        if(v[i]==maxi and !nottheif[i])
                st.insert(i);
    }
   cout<<st.size()<<endl;
  for(auto x:st)
   cout<<x<<endl;
    
}

    return 0;
}
