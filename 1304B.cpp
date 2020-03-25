//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
string rev(string s)
{
	string t =s;
	reverse(t.begin(),t.end());
	return t;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
	  ll n;
	  cin >> n;
	  ll len;
	  cin >> len;
	  string s[n];
	  string c[n];
	  string p[10000];
	  string sin[10000];
	  for(ll i=0;i<n;i++)
	  {
		  cin >> s[i];
		  c[i] = s[i];
		//  cout<<rev(s[i])<<endl;
	  }
	  ll x =0;
	  for(ll i =0;i<n;i++)
	  {		
		   for(ll j =i+1;j<n;j++)
		  {	 	
			  string t = rev(s[j]);
			 if(s[i].compare(t)==0)
			  {
				  p[x] = s[i];
				  x++;
				  p[x] = s[j];
				  x++;
			  }
		  }
	  }
	  ll j =0;
	  for(ll i =0;i<n;i++)
	  {		
		  string k = rev(s[i]);
		  if(s[i].compare(k)==0)
		  {		
			  sin[j++]= s[i];
		  }
	  }
/*	  cout<<endl;
  for(ll i =0;i<x;i++)
	  {
		  cout << p[i]<<endl;
	  }
	  cout << endl;
	  for(ll i=0;i<j;i++)
	  {
		  cout << sin[i]<<endl;
	  }
	  cout<<endl;
*/
	  string clone="";
	  for(ll i =0;i<x;i++)
	  {
		  if(i%2==0)
		clone += p[i];
	}
		clone+=sin[0];
	  for(ll i =x;i>0;i--)
	  {		if(i%2!=0)
		  clone += p[i];
	  }
	  if(clone.length() ==0)
	  {
		  cout<<clone.length()<<endl;
	  }
	  else
	  {
	  cout<<clone.length()<<endl;
	  cout<<clone<<endl;
	 }
	  return 0;
}
