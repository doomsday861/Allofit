	/**
 * lol gungun pattern
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
 ll n;
 cin >>n;
 for(ll i =1;i<=(2*n);i++)
 {
	for(ll j =1;j<=((4*n)-1);j++)
 	{	
 		if(i<=n)
 		{
 			if(j&1 && j<=(((2*n)+1)-(2*i)))
 			{
 				cout<<"*";
 			}
 			else if(j&1 && j>=(((2*n)-1)+(2*i)))
 			{
 				cout<<"*";	
 			}
 			else
 			cout<<" ";
 		}
 		else if(i>n)
 		{
 			if(j&1 && j<=((2*i)-((2*n)+1)))
 			{
 				cout<<"*";
 			}
 			 else if(j&1 && j>=(((6*n)+1)-(2*i)))
 			 {
 			 	cout<<"*";	
 			 }
 			else
 			cout<<" ";
 		}
 	}
 	cout<<endl;
}

//timee
    return 0; 
} 