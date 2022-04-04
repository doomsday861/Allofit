/**
 * 139A
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
int main()
{
    run
ll total;cin>>total;
vector<ll> v(7);
for0(i,7) cin>>v[i];

ll sum = total-1;
ll cursum=0;
ll i=0;
while(cursum <=sum)
{
	cursum +=v[i];
	i++;
	i = i%7;
}
if(i==0) i=7;
cout<<i;

    return 0;
}