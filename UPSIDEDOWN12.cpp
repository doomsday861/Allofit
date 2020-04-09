	/**
 * USPSIDE DOWN NUMBERS CODESITES 16
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
set <string> d;
string findSum(string str1, string str2) 
{ 
    // Before proceeding further, make sure length 
    // of str2 is larger. 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
  
    // Take an empty string for storing result 
    string str = ""; 
  
    // Calculate length of both string 
    int n1 = str1.length(), n2 = str2.length(); 
  
    // Reverse both of strings 
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
          carry = sum/10; 
    } 
      for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
      if (carry) 
        str.push_back(carry+'0'); 
      reverse(str.begin(), str.end()); 
    return str; 
} 
void compute()
{
	string s ="0";
	while(s.length()!=4)
	{	
		ll c=0;
		for(ll i =0 ; i <s.length();i++)
		{
			if(s[i]=='1'|| s[i]=='0'||s[i]=='8')
				c++;
			else
				break;
		}
		if(c==s.length())
			d.insert(s);
		s= findSum(s,"1");
	}
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
compute();
 testcase
  { 	
  	string x,y;
  	ll c=0;
  	cin >> x>>y;
  	while(x.compare(y)!=0)
  	{
  		if(d.find(x)!=d.end())
  			c++;
  		x = findSum(x,"1");
  	}
  	cout<< c<<endl;
}
//timee
    return 0; 
} 