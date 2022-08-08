/**
 * 1701A
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
    ll ar[2][2];
    ll cnt=0;
    for0(i,2)
    {
        for0(j,2)
        {
            cin>>ar[i][j];
            if(ar[i][j])cnt++;
        }
    }
    ll ans =0;
    if(cnt==0 or cnt==1)
        {
            cout<<cnt<<endl;continue;
        }
    else if(cnt==2)
        cout<<1<<endl;
    else if(cnt==3 or cnt==4)
    {
        cout<<2<<endl;
        continue;
    }
    
}

    return 0;
}
