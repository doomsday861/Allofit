	/**
 * UVA 11952 BATTLESHIPS
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
char ar[101][101];
ll n,counter;
void init()
{	counter=0;
	for(ll i =0 ; i <101;i++)
	{
		for(ll j =0 ; j <101;j++)
			ar[i][j]='.';
	}
}
void vertical(ll r, ll c)
{	
	ar[r][c] = '.';
	r++;
	while(ar[r][c]!='.' && r<n)
	{
		ar[r][c]='.';
		r++;
	}
}
void horizontal(ll r, ll c)
{
	ar[r][c]='.';
	c++;
	while(ar[r][c]!='.')
	{
		ar[r][c]='.';
		c++;
	}
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
ll t;
cin>>t;
ll lol =t;
while(t--)
  { 	
  	cin>>n;
  	init();
  	for(ll i =0;i<n;i++)
  	{
  		for(ll j =0 ; j<n;j++)
  			cin>>ar[i][j];
  	}
    	for(ll i =0;i<n;i++)
  	{
  		for(ll j =0 ; j<n;j++)
  			{
  				if(ar[i][j]=='x')
  				{
  					if(j<n && ar[i][j+1]=='x'||ar[i][j+1]=='@')
  						horizontal(i,j);
  					else if(i<n && ar[i+1][j]=='x'||ar[i+1][j]=='@')
  						vertical(i,j);
  					counter++;
  				}
  			}
  	}
  	cout<<"Case "<<lol-t<<": "<<counter<<endl;
}
//timee
    return 0; 
} 