/**
 * DISTCON
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
ll manhattan(ll x1,ll y1,ll x2, ll y2)
{
	ll ans = abs(x2-x1)+abs(y2-y1);
	return ans;
}
int main()
{
    run

ll d;
cin>>d;
if(d&1)
{
	cout<<-1;
	return 0;
}
vector<pair<ll,ll>> v(4);
v[0].fi = 0;
v[0].se = d/2;
v[1].fi = d/2;
v[1].se = 0;
v[2].fi = 0;
v[2].se = -d/2;
v[3].fi = -d/2;
v[3].se = 0;
for(ll i=0; i < 4;i++)
{
	cout<<v[i].fi<<" "<<v[i].se<<endl;
}
   

    return 0;
}