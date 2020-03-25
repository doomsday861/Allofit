//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
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
	  string s;
	  cin>>s;
	  ll a,b;
	  a=0;
	  b=0;
	  //ll x=0;
	  ll lc =0;
	  char ls='K';
	  for(ll i =0;i<s.length();i++)
	  {
		  if(s[i]=='.')
			lc++;
			else
			{
			if(s[i]=='A')
			a++;
			else
			b++;
			if(s[i]==ls)
			{
				if(ls=='A')
				{
					a += lc;
				}
				else
				{
					b += lc;
				}
			}
			ls = s[i];
				lc=0;
		}
	}
	cout<<a<<" "<<b<<endl;
			
}
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
