		/**
	 * boring marathon hackerearth
	 * Kartikeya (doomsday861)
	**/
	#include<bits/stdc++.h>
	#include<time.h>
	#include<iomanip>
	#define ll long long
	#define testcase ll t;cin>>t;while(t--)
	#define timeb  auto start = high_resolution_clock::now(); 
	#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
	using namespace std;
	int main()
	{
	#ifndef ONLINE_JUDGE 
	freopen("in.txt", "r", stdin); 
	freopen("output.ans", "w", stdout); 
	#endif 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	using namespace std::chrono;
	//timeb
	 testcase
	  { 		
	  
	      string s;
	      cin>>s;
	      vector<double>ar(26,0.00);
	      for(ll i=0;i<(ll)s.length();i++)
	      {
	          ar[s[i]-'A'] +=(double)1.000;
	      }
	     double n = (double)s.length();
	      double c=0.0f;
	      for(ll i=0; i <26;i++)
	      {
	          if(ar[i])
	          {  
	            c +=(double)(((double)ar[i]/ (double)n) * (double)ar[i]);
	          }
	      }
	      cout<<setprecision(10)<<c<<" "<<endl;
	}
	//timee
	    return 0; 
	} 