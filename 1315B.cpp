//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
vector<ll> duh;
vector<ll> steps;
void counter(string s, ll x,ll a, ll b)
{	ll k=1;
	ll count=0;
	  for(ll i  =s.length()-1 ; i>0;i--)
	  {
		  if(s[i]==s[i-1] && s[i]=='A')
		  {
			  while(s[i]==s[i-1] && s[i]=='A' && i >0)
			   {	k++;
				   i--;
			   }
			   
			   count +=a;
		  }
		  else if(s[i]==s[i-1] && s[i]=='B')
		  {
			   while(s[i]==s[i-1] && s[i]=='B' && i >0)
			   {
				   i--;
				   k++;
			   }
			  count +=b;
		  }
		  else if(s[i]=='A' && s[i-1] == 'B')
		  {		k++;
			  count +=b;
		  }
		  else if(s[i]=='B' && s[i-1] == 'A')
		  {		k++;
			  count +=a;
		  }
		  	 duh.push_back(count);
		  	 steps.push_back(k);
	  }
	 //return count;
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
	  ll a,b,p;
	  cin >> a >>b>>p;
	  string s;
	  cin >> s;
	  counter(s,0,a,b);
	  ll co=0;
		/*while(1)
		{
			if(counter(s,count,a,b)<=p)
			{
				cout<<count+1<<endl;
				break;
			}
			else
			count++;
		}*/
		bool f=0;
		for(ll i =0;i<duh.size();i++)
		{	
			cout<<duh[i]<<" ";
			cout<<steps[i]<<endl;
		}
		cout<<endl;
		if(!f)
		cout<<s.length()<<endl;
}
//timee
    return 0; 
} 
