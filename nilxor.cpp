/**
 * nilxor
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[55][2];
ll n, x;
ll dfs(int ind, int g) {
    if(ind < 0) return 1;
    if(dp[ind][g] != -1) return dp[ind][g];
 
    ll ans = 0;
    if(x >> ind & 1) {
         ans += dfs(ind - 1, g);
    } else {
        if(n >> ind & 1) {
            ans += dfs(ind - 1, g);
            ans += dfs(ind - 1, 0);
        } else {
            ans += dfs(ind - 1, g);
            if(g == 0) ans += dfs(ind - 1, g);
        }
    }
 
    return dp[ind][g] = ans;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        memset(dp, -1, sizeof dp);
        cin >> n >> x;
        cout << dfs(39, 1) - 1 << endl;
    }
}

