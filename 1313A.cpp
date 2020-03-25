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
flin
//timeb
 testcase
  { 	
	  ll a,b,c;
	  cin >> a >> b>>c;
	  bool f =0;
	  ll count =0;
	  if(a>=4 && b>=4 && c>=4)
	  {
		  cout << 7 <<endl;
		  continue;
	  }
	  	  	  if(a>0)
	  {
		  count++;
		  a--;
	  }
	  	  if(a==b && b==c && a==c && a!=0)
	  {
		  	a--;b--;c--;
		  count +=3;
		  f =1;
	  }
	  if(b>0)
	  {
		  count++;
		  b--;
	  }	  if(a==b && b==c && a==c && a!=0 && !f)
	  {		a--;b--;c--;
		  count +=3;
		  f =1;
	  }
	  if(c>0)
	  {
		  count++;
		  c--;
	  }
	  	  if(a==b && b==c && a==c && a!=0 &&!f)
	  {
		  count +=3;
		  f =1;
	  }
	  if(a>0 && b>0 && c>0)
	  {
		  count++;
		  a--;
		  b--;
		  c--;
	  }
	  if(a==b && b==c && a==c && a!=0 && !f)
	  {		a--;
		  b--;c--;
		  count +=3;
		  f =1;
	  }
	  if(!f)
	  {
	  if(b>a && c>a)
	  {
		  count++;
		  b--;c--;
	  }
	  if(a>c && b>c)
	  {
		  a--;
		  b--;
		  count++;
	  }
	  if(b>a && c>a)
	  {
		  b--;
		  c--;
		  count++;
	  }
  }
	  cout<<count<<endl;
  }
		  
//timee
    return 0; 
} 
