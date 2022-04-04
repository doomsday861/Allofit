/**
 * punched1
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

 ll t;
 cin>>t;
 ll x = 1;
 while(t--)
 {
 	 ll row,col;
     cin>>row>>col;
     char ar[(2*row+1)][(2*col+1)];
     for0(i,2*row+1)
     {
     	for0(j,2*col+1)
     	ar[i][j] ='#';
     }
     ar[0][1]=ar[0][0]=ar[1][0]=ar[1][1] = '.';
     for0(i,2*row+1)
     {
     	for0(j,2*col+1)
     	{
     		if(i&1^1)
     		{
     			char x = '+';
     			char y = '-';
     			if(ar[i][j] == '.')
     			{
     				continue;
     			}
     			if(j&1)
     			{
     				ar[i][j] = y;

     			}
     			else
     			{
     				ar[i][j] =  x;
     			}
     		}
     		else
     		{
				char x = '|';
     			char y = '.';
     			if(ar[i][j] == '.')
     			{
     				continue;
     			}
     			if(j&1)
     			{
     				ar[i][j] = y;

     			}
     			else
     			{
     				ar[i][j] =  x;
     			}     			
     		}
     	}
     }
        cout<<"Case #"<<x++<<":"<<endl;
     for0(i,2*row+1)
     	{
     		for0(j,2*col+1)
     		cout<<ar[i][j];
     		cout<<endl;
     	}

 }
   

    return 0;
}