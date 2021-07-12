/**
 * GOODSET
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
vector<ll> v;
for (ll i = 1; i <= 100; i++)
{
    v.push_back(420-i);
}
 testcase
  {
      ll n;
      cin>>n;
    for(ll i=0; i<n;i++) cout<<v[i]<<" ";
    cout<<endl;     
}
    return 0;
}