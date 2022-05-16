/**
 * doubledist
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
    //unordered_map<ll,ll> mp;
    for0(i,n)
    {
        cin>>v[i];
    //    mp[v[i]]++;
    }
    sort(bend(v));
    bool f=1;
    for(int i= 1; i <n-1;i++)
    {
        ll d1 = v[i]-v[i-1];
        ll d2 = v[i+1]-v[i];
        if(d1!=2*d2 && d2!=2*d1)
        {
            f=0;
            break;
        }
            
    }
    if(!f)
    {
        cout<<"No"<<endl;
    }
    else
        cout<<"Yes"<<endl;
    
}

    return 0;
}
