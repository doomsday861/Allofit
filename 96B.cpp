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
vll lucky;
 
void trY(ll number, ll fives, ll eights) {
  if(number > 1e10) return;
  
  if(fives == eights)
    lucky.push_back(number);
  
  trY(number * 10 + 8, fives, eights + 1);
  trY(number * 10 + 5, fives + 1, eights);
}
 
int main() {
    run
  trY(5, 1, 0);
  trY(8, 0, 1);
  
  ll n;
  cin >> n;
  sort(lucky.begin(), lucky.end());
  cout << lucky[lower_bound(lucky.begin(), lucky.end(), n) - lucky.begin()] << endl;
    
    
    return 0;
}