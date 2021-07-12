/**
 * 1370C codeforces
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool isprime(ll n)
{
  for(ll i=2; i <=sqrt(n);i++)
  {
    if(n%i==0)
    return 0;
  }
  return 1;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
    ll n;
    cin>>n;
    if(n==1)
    {
      cout<<"FastestFinger"<<endl;
    }
   else if(n>2 && n&1^1)
   {
     if (!(n & (n - 1)) || (n % 4 != 0 && isprime(n / 2)))
       cout << "FastestFinger" << endl;
     else
     {
       cout<<"Ashishgup"<<endl;
     }
     
   }
    else
    {
      cout<<"Ashishgup"<<endl;
    }
    
      
}
    return 0;
}