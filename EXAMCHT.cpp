//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
 testcase
  { 	
	  ll a,b;
	  cin >> a>>b;
	  ll diff = abs(a-b);
	  ll count=0;
	  for(ll i =1;i<=sqrt(diff);i++)
	  {
		  if(diff%i==0)
		  {
			  if(diff/i==i)
			  count++;
			  else
			  count +=2;
			 }
		 }
			  cout <<count<<endl;
}
//timee
    return 0; 
} 
