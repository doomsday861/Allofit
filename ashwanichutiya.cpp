/**
 * ashwanichutiya
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

    
 multiset<ll> ashwanichutiya;
 ll n;
 cin>>n;
 for0(i,n)
 {
 	ll x;
 	cin>>x;
 	ashwanichutiya.insert(x);
 	if(ashwanichutiya.size()&1)
 	{
 		auto med = ashwanichutiya.cbegin();
 		// ll r = *(ashwanichutiya.cbegin() + med);
 	}
 	else
 	{
 		med = ashwanichutiya.size()/2;
 		ll med1 =  (ashwanichutiya.size()-1)/2;
 	}

 	cout<<"ashwanichutiya"<<endl;
 }

   

    return 0;
}