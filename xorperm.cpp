/**
 * xorperm
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
    if(n==3)
    {
        cout<<-1<<endl;
        continue;
    }
    if(n==6)
    {
        cout<<"5 6 1 2 4 3"<<endl;
        continue;
    }
    int cnt=1;
    vll v;
    for0(i,n)
    v.pb(cnt++);
    for(int i=0;i < n-3;i++)
    {
        if((v[i]^v[i+1])==v[i+2])
        {
            swap(v[i+2],v[i+3]);
        }
    }
    if((v[n-3]^v[n-2])==v[n-1])
    {
        swap(v[0],v[n-1]);
    }
    bool f=0;
    for0(i,n-2)
    {
        if((v[i]^v[i+1])==v[i+2])
        {
            f=1;
            break;
        }
    }
    if(f)
        cout<<-1<<endl;
    else
        {
            for0(i,n)
            cout<<v[i]<<" ";
        }
        cout<<endl;
}

    return 0;
}
