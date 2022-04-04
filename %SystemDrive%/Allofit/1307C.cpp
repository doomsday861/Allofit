//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
flin
//timeb
 	string s;
	   cin >> s;
	   ll m =1;
	   ll a[26]={0};
	   for(ll i =0 ; i<s.length();i++)
	   {
		   a[s[i]-97]++;
	   }
	   for(ll i =0; i<26;i++)
	   {
		   if(a[i]==0)
		   continue;
		   m *=a[i];
	   }
	   cout << m <<endl;
    return 0; 
} 
