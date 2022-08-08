/**
 * SLOWSOLN
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
    ll a,b,c;
    cin>>a>>b>>c;
    ll cap = min(a*b,c);
    ll number_of_iterations = cap/b;
    ll onecost= b*b;
    ll ans = onecost*number_of_iterations;
   // cout<<number_of_iterations<<endl;
    ans +=(cap%b)*(cap%b);
    cout<<ans<<endl;
}

    return 0;
}
