/**
 * darklight
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
        if((k==0)and(n%4==0))
        {
            cout<<"Off"<<endl;
        }
        if((k==0)and(n%4!=0))
        {
            cout<<"On"<<endl;
        }
        else if((k==1)and(n==0))
        {
            cout<<"On"<<endl;
        }
        else if((k==1)and(n!=0))
        {
            cout<<"Ambiguous"<<endl;
        }
    }

    return 0;
}
