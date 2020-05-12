	/**
 * UVA 713 
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
string add(string a, string b)
{	
	string s="";
	ll carry =0;
	if(a.length()>b.length())
	{
		swap(a,b);
	}
	ll l1 = a.length();
	ll l2 = b.length();
	ll dif = l2-l1;
	for(ll i =l1-1;i>=0;i--)
	{
		ll sum = a[i]-'0' + b[dif+i]-'0' + carry;
		s.push_back(sum%10 + '0');
		carry = sum/10; 
	}
	for(ll i = dif-1; i >=0; i--)
	{
		ll sum = b[i]-'0'+carry;
		s.push_back(sum%10+'0');
		carry = sum/10;
	}
	if(carry)
	{
		s.push_back(carry +'0');
	}
	return s;
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
  	string a,b;
  	cin >> a>>b;
  	reverse(a.begin(),a.end());
  	reverse(b.begin(), b.end());
  	string s = add(a,b);
  	bool z=0;
  	for(int i=0; i <(int)s.length();i++)
  	{
  		if(s[i]!='0')
  			z=1;
  		if(z)
  			cout<<s[i];
  	}
  	cout<<'\n';
}
//timee
    return 0; 
} 