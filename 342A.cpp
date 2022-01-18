/**
 * 342A
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
ll n;
bool f=0;
cin>>n;
vll v(n);
ll ar[8]={0};
for0(i,n){
 cin>>v[i];
 ar[v[i]]++;
}
if(ar[5]>0 || ar[7]>0)
{
	cout<<-1;
	return 0;
}
vector<string> st;
while(ar[1]>=1 && ar[2]>=1 && ar[4]>=1)
{
	string s = "1 2 4";
	st.pb(s);
	ar[1]--; ar[2]--;ar[4]--;
}
while(ar[1]>=1 && ar[2]>=1 && ar[6]>=1)
{
	string s = "1 2 6";
	st.pb(s);
	ar[1]--; ar[2]--;ar[6]--;
}
while(ar[1]>=1 && ar[3]>=1 && ar[6]>=1)
{
	string s = " 1 3 6";
	st.pb(s);
	ar[1]--; ar[3]--;ar[6]--;
}
for0(i,7)
{
	if(ar[i]>0)
		f=1;
}
if(f)
cout<<-1;
else
for(auto x: st)
	cout<<x<<endl;

    return 0;
}