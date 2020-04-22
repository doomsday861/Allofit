	/**
 * 382A codeforces
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
 string a;
 string u;
 cin >> a;
 ll l=0;
 ll r=0;
 string right="";
 string left="";
 bool f=0;
 for(ll i =0 ; i <a.length();i++)
 {
 	if(a[i]=='|')
 		{
 			f=1;
 			continue;
 		}
 		if(f)
 			{
 				r++;
 				right +=a[i];
 			}
 		else
 			{
 				l++;
 				left +=a[i];
 			}
 }
 cin >>u;
 ll b = u.length();
 ll x = b;
 ll i=0;
while(b!=0 && i<x)
{
	if(l>r)
	{
		r++;
		b--;
		right+=u[i];
		i++;
		continue;
	}
	if(r>l)
	{
		l++;
		b--;
		left +=u[i];
		i++;
		continue;
	}
	if(l==r)
	{
		l++;
		b--;
		left +=u[i];
		i++;
		continue;
	}
}
if((l==r && (b&1))||(l!=r && b==0))
{
cout<<"Impossible";
return 0;
}
cout<<left<<"|"<<right<<endl;
//timee
    return 0; 
} 