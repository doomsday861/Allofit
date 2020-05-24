	/**
 * yetanotherminimax problem hackerrank
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
cin>>n;

vector<bitset<32>> v;
vector<ll> norm;
for(ll i=0; i <n;i++)
{	
	ll x;
	cin>>x;

	norm.push_back(x);
}
sort(norm.begin(),norm.end());
for(ll i=0; i <n;i++)
{
	v.push_back(norm[i]);
}
string s1,s2;
unsigned long long n1,n2;
ll minindex =INT_MAX;
ll index1,index2;
for(ll i=0; i <n-1;i++)
{
	s1  = v[i].to_string();
	s2  = v[i+1].to_string();
		for(ll x=0; x<(ll)s1.length();x++)
		{
			if(s1[x]!=s2[x])
			{
				if(x<minindex)
				{
					minindex = x;
					n1 = v[i].to_ullong();
					n2 = v[i+1].to_ullong();
					index1=i;
					index2 = i+1;

				}
				break;
			}
		}

}
minindex = INT_MAX;
for(ll i=index2;i<n;i++)
{
	for(ll j=0;j<=index1;j++)
	{
		minindex = min(minindex,norm[i]^norm[j]);
	}
}
cout<< minindex <<endl;

 return 0; 
} 