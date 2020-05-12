	/**
 * LADDU BC
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
string win = "CONTEST_WON";
string host = "CONTEST_HOSTED";
string bug ="BUG_FOUND";
string top = "TOP_CONTRIBUTOR";
 testcase
  { 	
  	int x;
  	cin>>x;
  	string s;
  	cin >>s;
  	ll laddu =0;
  	while(x--)
  	{
  		string r;
  		cin >>r;
  		if(r==win)
  		{
  			int a;
  			cin >>a;
  			laddu += 300;
  			if(a<=20)
  				laddu += (20-a);
  		}
  		else if(r==bug)
  		{
  			int a;
  			cin>>a;
  			laddu +=a;
  		}
  		else if(r==host)
  		{
  			laddu +=50;
  		}
  		else if(r==top)
  		{
  			laddu +=300;
  		}
  		//cout<<laddu<<endl;
  	}
  	//cout<<laddu<<endl;
  	if(s=="INDIAN")
  	{
  		cout<< laddu/200<<'\n';
  	}
  	else
  		cout<<laddu/400<<'\n';

}
//timee
    return 0; 
} 