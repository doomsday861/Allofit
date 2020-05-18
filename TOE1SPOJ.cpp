	/**
 * TOE 1 SPOJ
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
 string s[3];
bool diagonal(char c)
{	
	ll count=0;
	for(ll a=0; a<3; a++)
	{
		if(s[a][a]==c)
			count++;
	}
	if(count==3)
		return true;
	count =0;
	if(c==s[0][2] && c ==s[1][1] && c==s[2][0])
		return true;
	return false;
}

bool horizontal(char c)
{
	
	ll count=0;
	for(ll i=0; i <3;i++)
	{	count=0;
		for(ll j=0; j < 3 ;j++)
		{
			if(c==s[i][j])
				count++;
		}
		if(count==3)
			return true;
	}
	return false;
}
bool vertical(char c)
{	
ll count=0;
for(ll i=0; i <3;i++)
	{	
		count=0;
		for(ll j=0; j < 3 ;j++)
		{
			if(c==s[j][i])
				count++;
		}
		if(count==3)
			return true;
	}
	return false;
}
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
  	cin>>s[0];
  	cin >>s[1];
  	cin>>s[2];
  	ll x=0;
  	ll o=0;// x==o only when someone wins // IF O WINS THEN ONLY EQUAL X AND O  but x does not win // IF X WINS THEN X>O 
  	// IF 0 AND X WINS  
  	for(ll i=0;i<3;i++)
  	{
  		for(ll j=0; j <3;j++)
  		{
  			if(s[i][j]=='X')
  				x++;
  			if(s[i][j]=='O')
  				o++;
  		}
  	}
  	//cout <<x<<o<<endl;
  	if(o>x)
  	{
  		cout<<"no\n";
  		continue;
  	}
  	if(o+x==0)
  	{
  		cout<<"yes\n";
  		continue;
  	}
  	if(o==x)
  	{
  		bool owins = (horizontal('O')|| vertical('O')|| diagonal('O'));
  		bool xwins = (horizontal('X')|| vertical('X')|| diagonal('X'));
  		if(owins && !xwins)
  		{
  			cout<<"yes\n";
  			continue;
  		}
  		else if(!owins && !xwins)
  		{
  			cout<<"yes\n";
  			continue;
  		}
  		else
  		{
  			cout<<"no\n";
  			continue;
  		}
  	}
  	if(x>o)
  	{ 
  		bool owins = (horizontal('O')|| vertical('O')|| diagonal('O'));
  		bool xwins = (horizontal('X')|| vertical('X')|| diagonal('X')	);
  	//	cout<<owins<<" "<<xwins<<endl;
  		if(xwins && !owins && x-o==1)
  		{
  			cout<<"yes\n";
  			continue;
  		}
  		else if(!xwins && !owins)
  		{
  			cout<<"yes\n";
  			continue;
  		}
  		else
  		{
  			cout<<"no\n";
  			continue;
  		}
  	}
}
//timee
    return 0; 
} 