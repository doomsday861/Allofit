/**
 * makepal2
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
    string s;
    cin>>s;
    if(n==1)
    {
        cout<<s<<endl;
        continue;
    }
    ll cnt1=0;
    ll cnt0=0;
    for(auto x:s)
    {
        if(x=='0')
            cnt0++;
        else
            cnt1++;
    }
    if(cnt1>n/2)
    {
        while(cnt1--)
            cout<<1;
    }
    else if(cnt0>n/2)
    {
        while(cnt0--)
            cout<<0;
    }
    else
    {
        while(cnt0--)
        {
            cout<<1;
        }
    }
                cout<<endl;


}

    return 0;
}
