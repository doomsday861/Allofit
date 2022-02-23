/**
 * 371C
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
ll nb,ns,nc,pb,ps,pc,r;
ll bc=0;
ll sc=0;
ll cc=0;
ll find(ll x)
{
	ll x1 = (max(0LL,bc*x - nb)*pb);
	ll y = (max(0LL,sc*x-ns)*ps);
	ll z = (max(0LL,cc*x-nc)*pc);
	// cout<<x1<<endl;
	// cout<<y<<endl;
	// cout<<z<<endl;
	ll ans = x1+y+z;
	return ans;
}
int main()
{
    run

 string s;
 cin>>s;
 cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;

 for(auto x:s)
 {
 	if(x=='B')
 		bc++;
 	else if(x=='C')
 		cc++;
 	else
 		sc++;
 }
   ll ans =0;
   ll high = 1e15;;
   ll low = 1;
   ll mid=0;
   bool f=0;
   if(find(1)>r)
   {
    cout<<0;
    return 0;
   }
   while(low <=high)
   {
   	mid = low+(high-low)/2;
  // 	cout<<mid<<endl;
   	if(find(mid) > r)
   	{
       		high = mid-1;

   	}
   	else if(find(mid) <= r)
   	{
   		low = mid+1;
      ans = mid;
   	}
   	else if(find(mid)==r)
   	{
   		break;
   	}
   }
  cout<<ans;

    return 0;
}