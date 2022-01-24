/**
 * 362B
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
ll n,d;
cin>>n>>d;
vll v(d);
bool f=0;
for0(i,d) {
    cin>>v[i];
    if(v[i]==n)
        f=1;
}
if(d==0)
{
    cout<<"YES";
    return 0;
}
sort(v.begin(), v.end());
ll maxg =0;
ll tempc =1;

for(ll i=1; i <d;i++)
{
//    cout<<v[i]<<endl;
    while(v[i]-v[i-1]==1 && i<d)
    {
 //    cout<<v[i];   
        i++;
        tempc++;
    }
    maxg = max(tempc,maxg);
    
    tempc=1;
}
if (maxg > 2 || v[0]==1 || f )
{
    cout<<"NO";
}
else
cout<<"YES";
    return 0;
}
