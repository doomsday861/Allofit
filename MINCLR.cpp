/**
 * MINCLR
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

    
 testcase{
 	ll n,m;
 	cin>>n>>m;
 	ll ar[n][m];
 	for0(i,n)
 	{
 		for0(j,m)
 			ar[i][j] =0;
 	}
 	ll x,y,x2,y2;
 	cin>>x>>y;
 	x--;y--;
 	ar[x][y] =1;
 	cin>>x2>>y2;
 	x2--;y2--;
 	ar[x2][y2] =2;

 	if((x2+y2)&1 !=(x+y)&1)
 	{
 		for0(i,n)
 		{
 			for0(j,m)
 			{
 				ll temp = (i+j)&1;
 				if(temp== ((x+y)&1))
 				{
 					cout<<1<<" ";
 				}
 				else
 					cout<<2<<" ";
 			}
 			cout<<endl;
 		}
 		return 0;
 	}
 	else
 	{
 		for0(i,n)
 			{
 			for0(j,m)
 			{
 				ll temp = (i+j)&1;
 				if(temp== ((x+y)&1))
 						ar[i][j] = 1;
 				else
 						ar[i][j] = 2;
 				}
 			}
 	}
 		if(x2>0)
 		{
 			ar[x2-1][y2] =3;
 		}
 		if(x2<n-1)
 		{
 			ar[x2+1][y2] = 3;
 		}
 		if(y2>0)
 		{
 			ar[x2][y2-1] = 3;
 		}
 		if(y2<m-1)
 			ar[x2][y2+1] =3;

 	for0(i,n)
 	{
 		for0(j,m)
 		cout<<ar[i][j]<<" ";
 		cout<<endl;
 	}
 }
   

    return 0;
}