#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll M = 1e9 + 7;

ll add(ll a, ll b) {
	return (a%M + b%M)%M;
}

ll mul(ll a, ll b) {
	return ((a%M) * (b%M))%M;
}

vector<ll> get(vector<ll> &a) {
	ll n = a.size();

	vector<ll> f(n, 0);
	vector<ll>mask(31, 0);

	for(ll i = 0; i < 31; i++) {
		if((a[0] & (1LL << i)))mask[i] = 1;
	}

	for(ll i=1; i<n;i++) {
		bool ff = 0;
		for(ll j = 0; j < 31; j++) {
			if((a[i]&(1LL<<j)) &&mask[j] > 0) ff = 1;
		}

		if(ff) {
			for(ll j = 0; j < 31; j++) {
				ll zeros = i -mask[j];
				ll ones =mask[j];
				if((a[i] & (1LL << j))) {
					f[i] = add(f[i], mul(zeros, (1LL<<j)));
				}
				else {
					f[i] = add(f[i], mul(ones, (1LL<<j)));
				}
			}
		}
		for(ll j = 0; j < 31; j++) {
			if((a[i] & (1LL << j)))mask[j] += 1;
		}
	}
	return f;
}

ll solve(ll n, vector<ll> a) {
	vector<ll> f = get(a);
	reverse(a.begin(), a.end());
	vector<ll> g = get(a);
	ll res = 0;
	for(ll i = 0; i < n; i++) {
		res = add(res, f[i]);
		res = add(res, g[i]);
	}
	return res;
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<ll> a(n);

		for(ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << solve(n, a) << endl;
	}
}