	/**
 * 75A 
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
 ll a,b;
 cin >> a>>b;
 	ll c = a+b;
 	string s = to_string(a);
 	string r = to_string(b);
 	string s1="";
 	string s2="";
 	for(ll i =0;i<s.length();i++)
 	{
 		if(s[i]!='0')
 			s1 +=s[i];
 	}
 		for(ll i =0;i<r.length();i++)
 	{
 		if(r[i]!='0')
 			s2 +=r[i];
 	}
 	ll x = stoll(s1);
 	ll y = stoll(s2);
 	ll z = x+y;
 	string haha = to_string(c);
 	string ajay="";
 	for(ll i =0 ; i  <haha.length();i++)
 	{
 		if(haha[i]!='0')
 			ajay +=haha[i];
 	}
 	ll lol = stoll(ajay);
 	//cout<< z<<" "<<lol<<endl;
 	if(z==lol)
 		cout<<"YES"<<endl;
 	else
 		cout<<"NO"<<endl;
//timee
    return 0; 
} 