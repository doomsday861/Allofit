/**
 * 1672C
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
    int cnt=0;
    int l = -1;
    int r =0;
    for0(i,n-1)
    {
        //cout<<i<<" ";
        if(v[i]==v[i+1])
        {
            if(l==-1)
                 l = i;
             r= i;
        }
    }
    if((r==0 && l==-1)|| l==r)     
    cout<<0<<endl;
    else
        cout<<max(1,r-l-1)<<endl;    
}

    return 0;
}
