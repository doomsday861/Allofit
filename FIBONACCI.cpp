//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
#define MAX 1000000007
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
vector<ll>f(1000000000);
f.push_back(0);
f.push_back(1);
for(ll i =2; i<1e9;i++)
{
	 ll x= (f[i-1] + f[i-2])%MAX;
	 f.push_back(x);
}
 testcase
  { 
	  	ll n;
	  cin >>n;
	  cout<<f[n-1]<<endl;
}
//timee
    return 0; 
} 
