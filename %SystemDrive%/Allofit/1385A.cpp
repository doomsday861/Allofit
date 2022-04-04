/**
 * 1385A
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run

    
 testcase
  {
  	vll v(3);
  	cin>>v[0]>>v[1]>>v[2];
  	sort(bend(v));
  	if(v[1]!=v[2])
  	{
  		cout<<"NO"<<endl;
  		continue;
  	}
  	else
  	{
  		cout<<"YES"<<endl<<v[0]<<" "<<v[0]<<" "<<v[1]<<endl;
  	}

}
   

    return 0;
}