/**
 * TEAMOF2
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
int setKthBit(int n, int k) //gfg source
{
    return ((1 << k) | n);
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vector<int> solved;
    vector<string>st;
    for0(i,n)
    {
        ll k;
        cin>>k;
        int tmp=0;
        for(int j=0;j<k;j++)
        {
            ll x;
            cin>>x;
                x--;
     //         cout<<x<<endl;
                tmp |=(1<<x);
        }
        if(tmp==0) continue;
        solved.pb(tmp);
    }
    bool ans=0;
    for(int i=0;i<solved.size();i++)
    {
        for(int j=0;j<solved.size();j++)
        {
            int top = solved[i]|solved[j];
            if(top==31)
            {
                ans=1;
                break;
            }
        }
        if(ans)break;
    }
    if(ans)cout<<"YES\n";
    else
        cout<<"NO\n";
}
    return 0;
}
