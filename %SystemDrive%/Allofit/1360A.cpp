	/**
 * 1350A codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool isprime(ll n)
{
	for(ll i=2;i*i<=n;i++)
		{
			if(n%i==0)
			return false;
		}
		return true;
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
 testcase
 {
 	ll n,k;
 	cin>>n>>k;
 	while(k--)
 	{
 		if(n%2==0)
 			{
 				n += 2*(k+1);
 				break;
 			}
 		else if(isprime(n))
 			n +=n;
 		else
 		{
 			for(ll i =2; i<=n;i++)
 			{
 				if(n%i==0)
 				{
 					n +=i;
 					break;
 				}
 			}
 		}
 }
 cout<<n<<endl;
}
//timee
    return 0; 
} 