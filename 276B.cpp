/**
 * 276B
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

string s;
cin>>s;
ll ar[26] = {0};
ll counter=0;
for(auto x:s)
{
	ar[x-'a']++;
}
for0(i,26)
{
	if(ar[i]&1)counter++;
}
if(counter==0 || counter==1 || counter&1)
	cout<<"First";
else
	cout<<"Second";
   

    return 0;
}