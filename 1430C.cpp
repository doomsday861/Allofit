/**
 * 1430C
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
  	ll n;
  	cin>>n;
  	multiset<int> was;
	for (int i = 1; i <= n; i++) {
		was.insert(i);
	}
	vector<pair<int, int> > ans;
	for (int i = 0; i < n - 1; i++) {
		auto it = was.end();
		it--;
		int a = *it;
		was.erase(it);
		it = was.end();
		it--;
		int b = *it;
		was.erase(it);
		was.insert((a + b + 1) / 2);
		ans.pb({a, b});
	}
	cout << *was.begin() << endl;
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i].fi << ' ' << ans[i].se << endl;
	}	
}
   

    return 0;
}