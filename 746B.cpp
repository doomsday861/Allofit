	/**
 * 746B CODEFORCES
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
 int n;
 cin >>n;
  string s;
  cin >>s;
  if(n==2)
  	{
  		cout<<s;
  		return 0;
  	}
   if(n&1)
{
  ll last = s.length()-2;
  for(int i=last; i >=0; i-=2)
  {
  	cout<<s[i];
  }
  for(int i=0; i<(int)s.length();i+=2)
  {
  	cout<<s[i];
  }
}
else
{	 

	char d[2003];
	ll r = n/2;
     ll l = r-1;
    bool turn= true;
    for(int i=0; i<n; i++){
        if(turn){
            d[l]= s[i];
            l--;
        }
        else{
            d[r]= s[i];
            r++;
        }
        
        turn = !turn;
    }
    d[n]=0;
    cout<<d<<endl;
}
//timee
    return 0; 
} 