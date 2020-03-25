//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
using namespace std;
bool check8(string s)
{
	ll x = s.length();
	for(ll i=0;i<x;i++)
	{
		if(s[i]=='8')
		return true;
	}
	return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//ll T;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
//auto start = high_resolution_clock::now(); 	
	  string s;
	  cin >> s;
	  ll count = 1;
	  ll x= stoll(s,nullptr,10);
	  x +=1;
	  s = to_string(x);
	  while(1)
	  {
		  if(check8(s))
		  {
			  cout << count<<endl;
			  return 0;
		  }
		  else
		  {
			  x++;
			  count++;
			  s = to_string(x);
		  }
	  } 
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
