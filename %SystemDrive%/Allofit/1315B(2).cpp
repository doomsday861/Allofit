	/**
 * 1315B 
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
 testcase
 {
 	ll a,b,p;
 	cin >> a>> b>>p;
 	string s;
 	cin >>s;
 	ll n = s.length();
 ///	ll li= INT_MAX;
 	s[n-1] = 'F';
 	for(ll i = n-1; i>0 ;i--)
 	{
 		if(s[i]!=s[i-1])
 		{
 			if(s[i-1]=='A')
 				p -=a;
 			else
 				p -=b;
 		//	i--;
 		}
 		if(p<0)
 		{
 			break;
 		}
 		n = i;
 	}
 	cout<<n<<endl;
//timee
 }
 getchar();
    return 0; 
}
