	/**
 * 1607 TIMUS
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
//timee

 ll a,b,c,d;
 cin >> a>>b>>c>>d;
 	while(1)
 	{
 		if(c <= a)
 			break;
 		if(a+b > c)
 			break;
 		a +=b;
 		c -=d;
 	//	cout<<a<<" "<<c<<endl;
 	}
 	cout<<max(a,c)<<endl;
//timee
    return 0; 
} 