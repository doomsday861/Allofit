/**
 * 1694C
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
    bool f=0;
    ll cursum =0;
    ll lastidx =0;
   for0(i,n)
   {
    cursum +=v[i];
        if(cursum < 0)
            f=1;
   }
   if(cursum!=0 or f)
   {
    cout<<"No"<<endl;
    continue;
   }
   for(ll i = n-1;i>=0;i--)
   {
    if(v[i]!=0)
    {
        lastidx = i;
        break;
    }
   }
   cursum =0;
   for0(i,lastidx)
   {
        cursum +=v[i];
        if(cursum > 0)
        {
            f=0;
        }
        else{
            f=1;
            break;
        }  
   }
   if(f)
    cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    
}

    return 0;
}
