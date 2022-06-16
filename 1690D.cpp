/**
 * 1690D
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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll cnt=0;
    ll ans = INT_MAX;
    ll l,r;
    for(r=0;r<k;r++)
    {
        if(s[r]=='W')
            cnt++;
    }
    ans = cnt;
    l=1;
    for(ll i=1;r<n;i++)
    {
        if(s[i]=='W')
        {
            cnt++;
        }
        else if(s[i-1]=='B')
        {
            cnt++;
        }
        if(s[r]=='W')
        {
            cnt++;
        }
        else
            cnt--;
        r++;
        ans = max(0LL,min(ans,cnt));
        cout<<ans<<endl;
    }
    cout<<ans<<endl;
    
}

    return 0;
}
