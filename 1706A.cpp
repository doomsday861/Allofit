/**
 * 1706a
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
    ll n,m;
    cin>>n>>m;
    vll v(n);
    for0(i,n)
    {
        cin>>v[i];
        v[i]--;
    }
    vll cnt(m,0);
    for0(i,n)
    {
       // cout<<m-v[i]<<" "; 
        ll mini = min(v[i],m-v[i]-1);
        ll maxi = max(v[i],m-v[i]-1);
 //       cout<<mini<<" "<<maxi<<endl;
        if(cnt[mini]==1)
        {
            cnt[maxi] = 1;
        }
        else
            cnt[mini] = 1;
    }
    for0(i,m)
    {
        if(cnt[i])
            cout<<"A";
        else
            cout<<"B";
      //  cout<<cnt[i]<<" ";
    }
    cout<<endl;
}

    return 0;
}
