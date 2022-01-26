/**
 * 221A
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
ll ar[100];
void rec(ll n)
{
	if(n==1)
		ar[1] = 1;
	swap(ar[n-1],ar[n]);
	return rec(n-1);
}
int main()
{
    run

    ll n;
    cin>>n;
    cout<<n<<" ";
    for1(i,n-1)
    {
    	cout<<i<<" ";
    }
   

    return 0;
}