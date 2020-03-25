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
 ll n;
  cin >> n;
  string s;
  cin >> s;
  if(n<26)
  {
	  cout << "NO"<<endl;
	  return 0;
  }
  bool c[26]={0};
	  for(ll i =0 ; i < n; i ++)
	  {	  
		  ll x =0;
		  if(isupper(s[i]))
		  x =s[i]-65;	
		  if(islower(s[i]))
		  x = s[i] -97;  
		c[x] = true;
	}
for(ll i =0; i<26;i++)
{
	if(c[i]==false)
	{
		cout<<"NO"<<endl;
		return 0;
	}
}
cout<<"YES"<<endl;
    return 0; 
 } 
