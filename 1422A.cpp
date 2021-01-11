/**
 * 1422 A codeforces
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	ll a,b,c;
  	cin >>a>>b>>c;
  	ll x = b-a;
  	ll y = c-b;
  	if(y== 2*x)
  	{
  		cout<<b+y<<endl;
  	}
  	else if(x==y)
  		cout<<c+x<<endl;
  	else if(x == 2*y)
  		cout<<a+x<<endl;
 // 	cout << x<<" "<<y<<endl;
}
    return 0;

}