/**
 * 509B.cpp
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
using namespace std;
int main()
{
    run

ll n,k;
cin>>n>>k;
// 2 3 3 4 5
// 1 1
// 1 1 2
// 1 1 2
// 1 1 2 3
// 1 1 2 3 4
vll v(n);
bool f=0;
vector<vector<ll>> ans(n);
for0(i,n)
 {
    cin>>v[i];
    ans[i].resize(v[i]);
}
for0(i,n)
{
    for0(j,n)
    {
        if(abs(v[i]-v[j])>k)
            f=1;
    }
}
if(f)
{
    cout<<"NO";
    return 0;
}
ll min = *min_element(v.begin(),v.end());
for0(i,n)
{
    for0(j,min)
    {
        ans[i][j] = 1;
    }
}

for0(i,n)
{
    ll curc =2;
    for(ll j=min;j<ans[i].size();j++)
    {
        ans[i][j] =  curc;
        curc %=k;
        curc++;
    }
}
cout<<"YES"<<endl;
for0(i,n)
{
    for0(j,ans[i].size())
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
