/**
 * 1539C
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
ll n,x,k;
cin >>n>>k>>x;
vector<ll> v(n);
for(ll i=0; i <n;i++) cin >>v[i];

sort(v.begin(),v.end());
vector<ll> dif;
for(ll i=0; i <n-1; i++)
{       
        dif.push_back((v[i+1] - v[i]));
        cout<<dif[i]<<" ";
}
cout<<endl;
//cout<<dif.size()<<" ";
ll ans =0;
sort(dif.begin(),dif.end());
vector<ll> y(n);
for(ll i=0; i <n-1;i++)
{
    y[i] = floor((dif[i]-1)/x);
    cout<<y[i]<<" ";
}
for(ll i=0; i <n-1;i++)
{
   if(y[i]  <= k)
   {
       k-=(y[i]);
       ans++;
   }
}
cout<<ans;
    return 0;
}