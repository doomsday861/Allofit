/**
 * generator
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
   srand(time(0));
int t = 1;
//cout<<t<<endl;
while(t--)
{
	int n = (rand()%10)+1;
	int m = (rand()%10)+1;
	cout<<m<<" "<<n<<endl;
	//cout<<t<<endl;
	for0(i,m)
	{
		for0(i,n)
			cout<<(rand()%1000)<<" ";
			cout<<endl;
	}
	// for0(i,m)
	// {
	// 	cout<<(rand()%n)+1<<" "<<(rand()%n)+1<<endl;
	// }
	// cout<<rand()%n<<endl;
}
   

    return 0;
}