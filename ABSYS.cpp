//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
bool exist(string s)
{
	for(ll i =0; i<s.length();i++)
	{
		if(s[i]=='m')
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
//flin
//timeb
 testcase
  { 	
	  string s[5];
	  ll ans =0;
	  for(ll i =0;i<5;i++)
	  cin>>s[i];
	  if(exist(s[0]))
	  {
		  ans = stoll(s[4])-stoll(s[2]);
		  s[0] = to_string(ans);
	  }
	   if(exist(s[2]))
	  {
		  ans = stoll(s[4])-stoll(s[0]);
		  s[2] = to_string(ans);
	  }
	   if(exist(s[4]))
	  {
		  ans = stoll(s[0])+stoll(s[2]);
		  s[4] = to_string(ans);
	  }
	   for(ll i =0;i<5;i++)
		{
			if(i!=4)
			cout<<s[i]<<" ";
			else
			cout<<s[i]<<endl;
		}
	  
}
//timee
    return 0; 
} 
