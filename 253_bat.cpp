/**
 * 253bat
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
    ll n,m;
    cin>>n>>m;
    char v[n][m];
    ll r1,r2,c1,c2;
    ll f=0;
    for0(i,n)
    {
        for0(j,m)
        {
            cin>>v[i][j];
            if(v[i][j]=='o')
            {
                if(f==0)
                {
                    r1= i;
                    c1 =j;
                     f=1;
                }
                else
                {
                    r2= i;
                    c2 = j;
                }
            }
        }
    }
    ll ans = abs(c2-c1) + abs(r2-r1);
    cout<<ans;

    return 0;
}
