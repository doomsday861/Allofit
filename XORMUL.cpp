/**
 * XORMUL
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
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans =0;
    for(int i=0;i<n;i++)
    {
        ll temp1 = ((1 << i) | ans);
        cout<<temp1<<" "<<ans<<endl;
        if(((a^temp1)*(b^temp1)) > ((a^ans)*(b^ans)))
        {
            ans = temp1;
        }
    }
    cout<<ans<<endl;
    
    
}

    return 0;
}
