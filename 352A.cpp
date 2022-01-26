/**
 * 352A
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
cin>>n;
ll fc=0;
ll zc=0;
while(n--)
   {
   	ll x;
   	cin>>x;
   	if(x==5)
   		fc++;
   	else
   		zc++;
   }
if(zc==0)
{
	cout<<-1<<endl;
	return 0;
}
bool f=0;
//cout<<fc<<endl;
while(fc && fc!=0)
{
	if((fc)%9==0)
	{
		f=1;
		break;
	}
	fc--;
}
if(!f)
{
	cout<<0<<endl;
	return 0;
}
else
{
	while(fc--)
	{
		cout<<5;
	}
	while(zc--)
	{
		cout<<0;
	}
	return 0;
}
cout<<-1;

    return 0;

}