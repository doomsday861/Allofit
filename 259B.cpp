/**
 * 259B
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
using namespace std;
 ll ar[3][3];

int main()
{
    run
ll sum=0;
    
 for0(i,3)
 {
 	for0(j,3)
 	{
 		cin>>ar[i][j];
 		sum +=ar[i][j];
 	}
 }
sum /=2;
ar[0][0] = sum - ar[0][1]-ar[0][2];
ar[1][1] = sum - ar[1][0]-ar[1][2];
ar[2][2] = sum - ar[2][0]-ar[2][1];
for0(i,3)
{
	for0(j,3)
	cout<<ar[i][j]<<" ";
	cout<<endl;
}
   

    return 0;
}