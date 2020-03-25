//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool isvowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	return true;
	return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
// auto start = high_resolution_clock::now(); 
 testcase
  { 	
	  ll n;
	  string s;
	  cin >> n;
	  cin >> s;
	  ll count =0;
	  ll counter =0;
	  if(n==1)
	  {
		  if(isvowel(s[0]))
		  cout << 1 << endl;
		  else
		  cout << 0 <<endl;
		  continue;
	  }
	  if(isvowel(s[0]))
	  {
	      if(s[0]==s[1])
	      counter = 1;
	      else
	      count=0;
	   }
	for(ll i =1; i<n-1;i++)
	{
		if(isvowel(s[i]) && s[i]!=s[i+1])
		{
			count++;
			//counter = max(counter,count);
		}
		else
		{
			 if(isvowel(s[i]) && s[i]==s[i+1])
			count++;
			counter = max(counter,count);
			count =0;
		}
	}
		if(isvowel(s[n-1]) && s[n-1]!=s[n-2])
		{
			count++;
			counter = max(counter,count);
		}
		cout<< counter << endl;
}
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
