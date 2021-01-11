/**
 * PERMUTATION EQUIATION
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll n;
cin >>n;
vector<ll> v(n);
for(ll i=0 ; i < n ; i++) cin>>v[i];

for(ll i=0; i <n;i++)
	cout<<v[v[i]-1]<<endl;

    return 0;
}