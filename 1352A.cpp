	/**
 * 1352A CODEFORCES
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
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
  	string n;
  	cin >>n;
  	if(n.length()==1)
  	{	
  		cout<<1<<'\n';
  		cout<<n<<endl;
  		continue;
  	}
  	bool f=0;
  	for(ll i=1 ; i <(ll) n.length();i++)
  	{
  		if(n[i]!='0')
  			f=1;
  	}
  	vector<string> ans;
  	if(!f)
  	{	cout<<1<<'\n';
  	  		cout<<n<<endl;
  		continue;
  	}
  	for(ll i=0; i <(ll)n.length();i++)
  	{	string s = "";
  		//s +=n[i];
  		if(n[i]=='0')
  			continue;
  		else
  		{	
  			s +=n[i];
  			for(ll x =i+1; x<(ll)n.length();x++)
  				s +='0';
  		}
  		ans.push_back(s);
  	}
  	cout<<ans.size()<<'\n';
  	for(ll i=0; i<(ll)ans.size();i++)
  	{
  		cout<<ans[i]<<' ';
  	}
  	cout<<'\n';
}
//timee
    return 0; 
} 