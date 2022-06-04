/**
 * 1678A
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
    bool f=0;
    set<ll>st;
    ll zc=0;
    for0(i,n)
    {
        cin>>v[i];
        if(v[i]==0)
            {
                f=1;
                zc++;
            }
        st.insert(v[i]);
    }
    if(f)
    {
        cout<<n-zc<<endl;
        continue;
    }
    else if(st.size()==n)
    {
        cout<<n+1<<endl;
        continue;
    }
    else
    {
        cout<<n<<endl;
    }
    
    
    
}

    return 0;
}
