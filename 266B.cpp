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
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 auto start = high_resolution_clock::now(); 
	  ll n;
	  cin >> n;
	  ll t;
	  cin >> t;
	  string s;
	  cin >> s;
	  for(ll i =0; i<t;i++)
	  {
		  for(ll j = 0 ;j<(n-1);j++)
		  {
			  if(s[j]=='B'&& s[j+1]=='G')
			  {
				  swap(s[j],s[j+1]);
				  j++;
			  }
		  }
	  }
	  cout << s<<endl;	  
	auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
  //       << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
