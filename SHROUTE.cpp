/**
 * SHROUTE
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
    ll n,m;
    vector<ll> tr(1000007);
    vector<ll> p(1000007);
    vector<ll> ans(1000007);
void complete()
{

    bool start =0;
    ll counter = 1;
    for(ll i=0; i <n;i++)
    {
        if(tr[i]==1)
        {
            ans[i] =0;
            start = 1;
            counter = 1;
        }
        else if(start)
        {
            ans[i] = counter;
            counter++;
        }
    }
    start =0;
    for(ll i=n-1; i>=0; i--)
    {
        if(tr[i]==2)
        {
            ans[i] =0;
            start =1;
            counter =1;
        }
        else if(start)
        {
            ans[i] = min(ans[i],counter);
            counter++;
        }
    }
    // for(ll i=0; i <n;i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
    tr.clear();
    ans.clear();
    p.clear();
    cin>>n>>m;
  	for(ll i=0; i <n;i++)
  		{
           cin>>tr[i];
            ans[i] = INT_MAX;
        }
  	for (ll i = 0; i < m; ++i)
  	{
  		cin>>p[i];
  	}
  	// for(ll i=0; i <m;i++)
  	// {
  	// 	if(t[p[i]-1] != 0)
  	// 		{
  	// 			cout<<0<<" ";
  	// 			continue;
  	// 		}
  	// }
    complete();
    for (ll i = 0; i < m; ++i)
    {
        if(p[i]==1)
        {
            cout<<0<<" ";
        }
        else if(ans[p[i]-1]==INT_MAX)
            cout<<-1<<" ";
        else
            cout<<ans[p[i]-1]<<" ";
    }
    cout<<endl;
    
}
    return 0;
}