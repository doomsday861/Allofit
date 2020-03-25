//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
ll T;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
// auto start = high_resolution_clock::now(); 
cin>>T;
while(T--)
  { 	ll a=0;
	  ll b=0;
	  ll c =0;
	  ll d =0;
	  ll e =0;
	  ll n;
	  cin >> n;
	  cin >> a;
	  ll max =1;
	 for(ll i =1;i<=n;i++)
	 max *=10;
	 
	 ll max2 = (2*max)+a;
	 cout << max2 <<endl;
	 cin >> b;
	 c = max-b;
	 cout << c<<endl;
	  cin >> d;
	  e = max-d;
	  cout << e<<endl;
	 ll duh;
	 cin>> duh;
}
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
