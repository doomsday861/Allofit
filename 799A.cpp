	/**
 * 799A CODEFORCES
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
 ll n,t,k,d;
 cin >> n>>t>>k>>d;
 ll c=0;
 ll i;
 ll t1,t2=0;
 for(i =1;;i++)
 {
 	if((i%t)==0)
 		c +=k;
 //	cout<<c<<endl;
 	if(c>=n)
 	{
 		t1=i;
 		break;
 	}
 }
// cout<<"out1"<<endl;
 c=0;
 bool f=0;
 for(i=1;;i++)
 {
 	if((i%t)==0)
 		c +=k;
 	if(i==d)
 		f=1;
 else	if(f)
 	{
 		if((i-d)%t==0)
 			c +=k;
 	}
 	if(c>=n)
 	{
 		t2 =i;
 		break;
 	}
 //	cout<<c<<endl;
 }	
// cout<<"out2"<<endl;
 //cout<<t1<<" "<<t2<<endl;
 if(t1>t2)
 	cout<<"YES"<<endl;
 else
 	cout<<"NO"<<endl;
//timee
    return 0; 
} 