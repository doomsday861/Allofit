/**
 * CIREQ
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
    multiset<ll>st;
    ll mini = INT_MAX;
    for0(i,n)
    {
        cin>>v[i];
        st.insert(v[i]);
    }
    ll cnt =1;
    ll cur =1;
    
   while(st.size())
   {
    auto itr = st.lower_bound(cur);
    if(itr!=st.end())
    {
        st.erase(itr);
        cur++;
    }
    else
    {
        cur=1;
        cnt++;
    }
   }
   cout<<cnt<<endl;
}

    return 0;
}
