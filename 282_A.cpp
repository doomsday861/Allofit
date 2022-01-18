/**
 * 282_A
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

    ll x=0;
 testcase
  {
  	string s;
  	cin>>s;
  	if(s[0]=='+'||s[1]=='+'||s[2]=='+')
  		x++;
  	else
  		x--;
}
cout<<x;
   

    return 0;
}