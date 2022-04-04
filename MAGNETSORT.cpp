/**
 * MAGNETSORT
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define maxn 10009
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run
    int t;
	cin >> t ; 
	while ( t -- )
	{
		int n ; 
		cin >> n ; 
		int a[10008];
		int b[10008];  
		for1(i,n)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		string s; 
		cin>>s;
		ll tmp =n; 
		s =' '+s; 
		ll A = 0 , B = 0 ;  
		sort (a + 1,a + n + 1) ; 
		int ok = 0 ; 
		for1(i,n)
		{
			if (a[i]!=b[i])
			{
				ok = 1 ; 
				break; 
			}
		}
		if (ok==0) 
		{
			cout<<0<<endl; 
			continue ; 
		}
		for1(i,tmp)
		{
			if (s[i]=='N')A++ ; 
			else B++ ; 
		}
		if (A==0 || B==0 )
		{ 
			cout<<-1<<endl; 
		}	
		else 
		{
			int ans = 2;
			int cur; 
			int i =1 , j=tmp ; 
			int cnt=n+1; 
			while (s[i]==s[j] )
			{
				cnt -- ; 
				j -- ; 
			}
			ok=0 ; 
			for (ll i = cnt;i<=n ;i++)
			{
				if (b[i] != a [i]) 
				{
					ok = 1 ; 
					break ; 
				}
			}
			if (ok == 1)
			{
				cur = 2 ; 
				ans = min ( ans , cur ) ; 
			}
			else 
			{
				cur = 1 ; 
				ans = min ( ans , cur ) ;
			}
			i = 1 , j = n ; 
			cnt = 0 ; 
			while ( s [ i ] == s [ j ] )
			{
				i ++ ; 
				cnt ++ ; 
			}
			ok = 0 ; 
			for ( int i = 1 ; i <= cnt ; i ++ )
			{
				if ( a [ i ] != b [ i ] )
				{
					ok = 1 ;
					break ; 
				}
			}
			if ( ok == 1 )
			{
				cur = 2 ; 
				ans = min ( ans , cur ) ; 
			}
			else 
			{
				cur = 1 ; 
				ans = min ( ans , cur ) ;
			}
			cout << ans << "\n" ; 
		}
	}
}
   
