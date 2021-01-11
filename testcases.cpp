/**
 * testcases generator
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
string printRandomString(int n) 
{ 
  
    string res = ""; 
    for (int i = 0; i < n; i++)  
        res = res + alphabet[rand() % 26]; 
      
    return res; 
} 
int main()
{
srand(time(NULL));
 	for(ll i=0;i<=1000;i++)
 	{
  	cout<<100<<endl;
  	cout<<printRandomString(100)<<endl;
  	cout<<alphabet[rand() % 26]	<<endl;
  }
    return 0;
}