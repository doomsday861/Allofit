/**
 * D pair of topics
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
cin>>n;
vector<ll> a(n);
vector<ll> b(n);
vector<ll> pre1(n);
vector<ll> pre2(n);

for(ll i=0; i <n;i++)
{
    cin >>a[i];
}
for (ll i = 0; i < n; i++)
{
    cin >> b[i];
}
ll ans=0;
for(ll i=0; i < n;i++)
{
  pre1[i] = a[i] - b[i];
}
sort(pre1.begin(),pre1.end());
ll d= n-1;
ll s = 0;
while(pre1[d] > 0 && s < d)
{
    if(pre1[d] + pre1[s] > 0)
    {
        ans +=d-s;
        d--;
    }
    else
    {
        s++;
    }
}
cout<<ans;

    return 0;
}