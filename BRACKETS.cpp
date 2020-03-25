//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll counter (string s)
{
	ll bal =0;
	ll maxbal =0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		bal++;
		if(s[i]==')')
		bal--;
		maxbal =max(maxbal,bal);
	}
	return maxbal;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
//auto start = high_resolution_clock::now(); 
 testcase
  { 	string s;
	  cin >> s;
	  ll maxbal = counter(s);
	  //cout << maxbal <<endl;
	  for(ll i =0;i< 2*maxbal;i++)
	  {
		  if(i<maxbal)
		  cout <<"(";
		  else
		  cout <<")";
	  }
	  cout << endl;
}
//	auto stop = high_resolution_clock::now(); 
//   auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
