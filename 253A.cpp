/**
 * 253A
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
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
ll b,g;
cin>>b>>g;
while(b!=0 && g!=0 && b>g)
{
	cout<<"BG";
	b--;
	g--;
}
while(b!=0 && g!=0 && g>=b)
{
	cout<<"GB";
	b--;
	g--;
}
while(b!=0)
{
	cout<<"B";
	b--;
}   
while(g!=0)
{
	cout<<"G";
	g--;
}


    return 0;
}