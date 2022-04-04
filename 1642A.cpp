/**
 * 1642A
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

    
 testcase
  {
  	vector<pair<ll,ll>>cord(3);
  	for0(i,3)
  	cin>>cord[i].se>>cord[i].fi;
  	sort(bend(cord));
  	double ans = 0.0;
  	if(cord[1].fi==cord[2].fi && cord[0].fi<cord[1].fi)
  	{
  		ans = abs(cord[1].se-cord[2].se);
  	}
  	cout<<fixed<<setprecision(7)<<ans<<endl;

}
   

    return 0;
}