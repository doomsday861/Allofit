/**
 * 1632C
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
    ll a,b;
    cin>>a>>b;
    bool f=0;
    bool f1=0;
    ll ans=b-a;
    if((a|b) == b)
    {
        cout<<1<<endl;
        continue;   
    }
    for(ll i=0;i<(b-a);i++)
    {
        if(((a+i)|b) == b || ((b+i)|a) == (b+i))
        {
            f=1;
            ans = min(ans,i+1);
            break;
        }
        if(a==b)
        {
            f1=1;
            ans = min(ans,i);
            break;
        }
    }
    cout<<ans<<endl;
    
    }

    return 0;
}
