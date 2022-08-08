/**
 * 1706B
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
    vector<vll>fr(n+1);
    for0(i,n)
    {
        fr[v[i]].pb(i);
    }
    vll ans(n+1,0);
    for1(i,n)
    {
        ll tc=0;
        if(fr[i].size()==0)
        {
            cout<<0<<" ";
            continue;
        }
        for(ll j=0;j<fr[i].size()-1;j++)
        {
            //cout<<fr[i][j]<<" ";
            if((fr[i][j+1]-fr[i][j])==1)
                tc++;
            else if((fr[i][j+1]-fr[i][j])&1)
                tc++;
        }
       cout<<tc+1<<" "; 
    }
    cout<<endl;
    

}

    return 0;
}
