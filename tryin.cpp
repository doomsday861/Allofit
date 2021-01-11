#include <iostream>
#define ll long long
using namespace std;
int main()
{
    long n,m;
    cin>>n;
    cin>>m;
    ll i;
    ll a[m]={};
    ll b[m]={};
    ll k[m]={};
    ll arr[n]={};
    for(i=0;i<n;i++)
        arr[i]=0;
    for(i=0;i<m;i++)
    {
        cin>>a[i]>>b[i]>>k[i];
    }
    for(ll j=0;j<m;j++)
    {
    for(i=0;i<n;i++)
    {
        if((i>=a[j])&&(i<=b[j]))
        arr[i]+= k[j];
        
    }}
    ll max=-9999;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<max;
}