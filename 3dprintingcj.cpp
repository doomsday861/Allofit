/**
 * 3dprinting
 * codejam
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
int main()
{
    run

    
 ll t,x;
 cin>>t;
 x =1;
 while(t--)
  {
  	ll ink[3][4];
  	ll curmin[4];
  	curmin[0]=curmin[1]=curmin[2]=curmin[3] = INT_MAX;
  	for0(i,3)
  	{
  		for0(j,4)
  		{
  			cin>>ink[i][j];
  			curmin[j] = min(curmin[j],ink[i][j]);
  		}
  	}
  	ll needed = 1e6;
  	ll sum=0;
  	for0(i,4)
  	{	
  		// cout<<curmin[i]<<" ";
  	 	sum+=curmin[i];
  	}
  	if(sum<needed)
  	{
  		cout<<"Case #"<<x++<<": IMPOSSIBLE"<<endl;
  		continue;
  	}
  	sum =0;
  	int counter=0;
  	int ans[4];
  	ans[3] = ans[2]=ans[1]=ans[0]=0;
  	while(needed>0)
  	{
  		ans[counter%4] += min(curmin[counter%4],needed-(4 - (counter%4)-1));
  		ll tmp = needed;
  		needed -= min(curmin[counter%4],needed-(4 - (counter%4)-1));
  		curmin[counter%4] -=min(curmin[counter%4],tmp-(4 - (counter%4)-1));
  		counter++;
  	}
  	cout<<"Case #"<<x++<<": ";
  	for0(i,4)
  	cout<<ans[i]<<" ";
  	cout<<endl;

}
   

    return 0;
}