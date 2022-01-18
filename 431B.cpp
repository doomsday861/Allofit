/**
 * 431B
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
using namespace std;
vll v ={0,1,2,3,4};
ll ar[5][5];
ll sumgen()
{
	ll ans =ar[v[0]][v[1]] + ar[v[1]][v[0]]+ar[v[2]][v[3]]+ar[v[3]][v[2]] + ar[v[1]][v[2]] + ar[v[2]][v[1]] + ar[v[3]][v[4]] + ar[v[4]][v[3]] + ar[v[2]][v[3]] + ar[v[3]][v[2]] + ar[v[3]][v[4]] + ar[v[4]][v[3]];
	return ans;
}
int main()
{
    run

for0(i,5)
{
	for0(j,5)
	cin>>ar[i][j];
}
ll ans=sumgen();
do
{
	ans = max(ans,sumgen());
	// for(auto x: v)
	// 	cout<<x<<" ";
	// cout<<endl;
}while(next_permutation(v.begin(),v.end()));
cout<<ans;
    return 0;
}