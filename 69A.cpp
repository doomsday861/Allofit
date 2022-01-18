/**
 * 69A
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
ll n;
cin>>n;
ll s1=0,s2=0,s3=0;	
while(n--)
{
	ll a,b,c;
	cin>>a>>b>>c;
	s1+=a;
	s2+=b;
	s3+=c;
}
if(s1==0 && s2==0 && s3==0)
cout<<"YES";
else
cout<<"NO";
    return 0;
}