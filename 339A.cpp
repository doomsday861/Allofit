//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
// auto start = high_resolution_clock::now(); 
string s;
cin >> s;
ll ar[1000000];
ll x =0;
ll n = s.length();
for(ll i =0;i<n;i++)
{	if(s[i]!='+')
	ar[x++]= s[i]-48;
}
sort(ar,ar+x);
for(ll i=0;i<x;i++)
{	if(i==x-1)
	cout <<ar[i];
	else
	cout << ar[i]<<"+";
}
cout <<endl;
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
