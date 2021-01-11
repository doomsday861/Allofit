/**
 * KODEATHON A23
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool isprime(int n)
{
	for(ll i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	int a; int b;
  	cin >>a>>b;
  	if(isprime(a) && isprime(b))
  		cout<< (a ^ b) <<endl;
  	else
  		cout<< (a & b) <<endl;
}
    return 0;
}