/**
 * 4B
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

   ll d,s;
   cin>>d>>s;
   vector<pair<ll,ll>>v(d);
   ll mins =0;
   ll maxs= 0;
   for0(i,d){
    cin>>v[i].fi>>v[i].se;
    maxs +=v[i].se;
    mins +=v[i].fi;
}
if(s<mins || s>maxs)
{
	cout<<"NO";
	return 0;
}
vll ans(d,0);
ll sum=0;
bool f=0;
bool vis[d]={0};
while(sum !=s)
{
	for0(i,d)
	{
		if(sum==s)
		{
			break;
		}
		if(v[i].fi <= v[i].se)
		{
			if(vis[i])
			{
			 sum -=(v[i].fi -1);
			}
			sum +=v[i].fi;
			ans[i] = v[i].fi;
			v[i].fi++;
		}
		vis[i] =1;
	}
}
cout<<"YES"<<endl;
for(auto x:ans)
	cout<<x<<" ";
   

    return 0;
}