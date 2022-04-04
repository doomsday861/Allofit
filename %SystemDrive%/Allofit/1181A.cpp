/**
 * 1181A
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

    
 ll a,b,c;
 cin>>a>>b>>c;
 ll total = (a/c)+(b/c);
 ll left=0;
 if((a%c)+(b%c)>=c)
{
	total++;
	left = c-(max(a%c,b%c));
}

cout<<total<<" "<<left;
    return 0;

}