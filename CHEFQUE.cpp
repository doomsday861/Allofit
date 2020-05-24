	/**
 * CHEFQUE codechef
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
// #ifndef ONLINE_JUDGE 
// freopen("in.txt", "r", stdin); 
// freopen("output.ans", "w", stdout); 
// #endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
vector<bool> v(1LL<<31L,false);
 ll q;
 cin>>q;
 unsigned int s;
 cin >>s;
 ll a,b;
 cin >>a>>b;
 ll sum=0;
 while(q--)
 {
 	unsigned int x = ceil(s/2);
 	//cout<<s<<" "<<x<<" "<<sum<<endl;
 	if(v[x])
 	{
 		if(!(s&1))
 		{
 			v[x] = false;
 			sum -= x;
 		}
 	}
 	if(!v[x])
 	{
 		if(s&1)
 		{
 			v[x] = true;
 			sum +=x;
 		}
 	}
 	s = (a*s + b);
 }
 cout<<sum<<endl;
//timee
    return 0; 
} 