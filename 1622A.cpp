/**
 * 1622A
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
  	vector<ll> v(3);
  	cin>>v[0]>>v[1]>>v[2];
 	if(v[0]==v[1]&& v[1]==v[2])
 	{
 		if(v[1]&1)
 			cout<<"NO"<<endl;
 		else
 			cout<<"YES"<<endl;
 	}
 	else if(v[0]==v[1])
 	{
 		if(v[2]&1)
 			cout<<"NO"<<endl;
 		else
 			cout<<"YES"<<endl;
 	}
 	 	else if(v[1]==v[2])
 	{
 		if(v[0]&1)
 			cout<<"NO"<<endl;
 		else
 			cout<<"YES"<<endl;
 	}
 	 else if(v[0]==v[2])
 	{
 		if(v[1]&1)
 			cout<<"NO"<<endl;
 		else
 			cout<<"YES"<<endl;
 	}
 	else
 	{
 		sort(v.begin(),v.end());
 		if(v[2]-v[0] == v[1] || v[2]-v[1] == v[0])
 			cout<<"YES"<<endl;
 		else
 			cout<<"NO"<<endl;
 	}

 }
    return 0;
}