	/**
 * 686A codeforces
 * Kartikeya (doomsday861)
 *GAYBOIS
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
//tim
ll n,x;
cin >>n>>x;
ll c = x;
ll gay=0;
while(n--)
{
	char ch;
	cin >> ch;
	int d;
	cin>>d;
	if(ch=='+')
		c +=d;
	if(ch=='-')
	{
		if(d>c)
			gay++;
		else
			c -=d;
	}
}
cout<<c<<" "<<gay<<endl;
//timee
    return 0; 
} 