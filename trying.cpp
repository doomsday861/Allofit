/**
 * Description
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
#define bend(x) x.begin(),x.end()
using namespace std;
bool check(vll v)
{
    ll x =0;
    for1(i,v.size()-1)
    {
        ll temp = abs(v[i]-v[i-1]);
        x ^=temp;
    }
    return(x==0);
}
int main()
{
    run

    
 testcase
  {
    ll n;
    cin>>n;
    vll v(n);
    for0(i,n) v[i] = i+1; 
    do
    {
        cout<<"hehe"<<endl;
    }while(next_permutation(v.begin(),v.end()) && check(v)!=1);
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}
   

    return 0;
}