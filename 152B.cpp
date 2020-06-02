	/**
 * 152B CODEFORCES
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
 ll n,m;
 ll x,y;
 ll posx,posy;
 ll c;
 void brute(ll a, ll b)
 {	
 	while(posx+a <=n && posy+b <=m && posx+a >0 && posy+b >0)
 	{
 		posx +=a;
 		posy +=b;
 		c++;
 	}
 }
 bool isval(ll a, ll b)
 {
 	return (a>0 && a<=n && b>0 && b<=m);
 }
int main()
{
// #ifndef ONLINE_JUDGE 
// freopen("in.txt", "r", stdin); 
// freopen("output.ans", "w", stdout); 
// #endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 cin >>n>>m;
 cin >>x>>y;
 ll k;
 cin >>k;
  posx =x;
  posy=y; 
  ll ans=0;
  ll counter=0;
 while(k--)
 {

  ll a,b;
  cin >>a>>b;
  //brute(a,b);
  ll l =0; ll r =1e9+9;
  while(l<=r)
  {
   	ll mid = l +(r-l)/2;
  	if(isval(x+(a*mid),y+(b*mid)))
  	{
  		counter = mid;
  		l = mid+1;
  	}
  	else
  	{
  		r = mid-1;
  	}
  }
  ans +=counter;
 // cout<<c<<" "<<ans<<endl;
  x += (a*counter);
  y +=(b*counter);
 }
 cout <<ans<<endl;
//timee
    return 0; 
} 