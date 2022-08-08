/**
 * 1699B
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
    ll n,m;
    cin>>n>>m;
    string st="01";
    ll ar[n][m];
    int cnt=1;
    for0(i,n)
    {
        if(i&1 && i!=0)
        {
            reverse(bend(st));
        }
        string s=st;
        for0(j,m/2)
        {
            
            cout<<s[0]<<" "<<s[1]<<" ";
            reverse(bend(s));
        }
        cout<<endl;
    }
    
}

    return 0;
}
