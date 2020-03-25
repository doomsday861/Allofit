	/**
 * problem 16 quora
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
vector<string> s;
string x;
while(cin>> x)
{
	s.push_back(x);
}
	string ar[s.size()+1];
	for(ll i =0 ; i < s.size();i++)
	{
		for(ll j =0; j<s[i].size();j++)
		{	string x="";
			bool f=0;
			if(isdigit(s[i][j]))
			{
				while(isdigit(s[i][j]))
				{
					x +=s[i][j];
					f=1;
					j++;
				}
			}
			if(f)
			{	//cout << x<<endl;
				ll y = stoll(x);
				ar[y] = s[i];
				break; 
			}
		}
	}
	for(ll i =1;i<=s.size();i++)
	{
		cout<< ar[i]<< " ";
	}
//timee
    return 0; 
} 