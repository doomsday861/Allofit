	/**
 * winning lottery ticket hackerrank
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
 vector<bitset<10>> mask(n,0); 
 vector<string> s(n);
 ll tle[1024] ={0};
 for(ll i=0; i <n;i++)
 {
 	cin >>s[i];
 }
 for(ll i=0; i < n ; i++)
 {
 	for(ll j=0;j<(ll)s[i].length();j++)
 	{
 		mask[i].set(9-(s[i][j]-'0'));
 	}
 	unsigned int x = mask[i].to_ulong();
 	tle[x]++;
 //	cout<<mask[i]<<endl;
 }
 ll count=0;
 // for(ll i=0; i <n;i++)
 // {
 // 	for(ll j=i+1;j<n;j++)
 // 	{
 // 		bitset<10> a = mask[i] | mask[j];
 // 		unsigned long x = a.to_ulong();
 // 	//	cout<<x<<endl;
 // 		if(x==1023)
 // 		count++;	
 // 	}
 // }
 for(ll i=0; i <1024;i++)
 {
 	if(tle[i]==0)
 		continue;
 	for(ll j=i+1;j <1024;j++)
 	{
 		if((i|j) == 1023)
 		{
 			count += tle[i]*tle[j];
 		}
 	}
 }
 count +=tle[1023]*(tle[1023]-1)/2; //n*(n-1)/2 pairs
 cout<<count<<endl;
//timee
    return 0; 
} 