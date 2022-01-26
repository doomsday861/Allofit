/**
 * 116B
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
 ll m,n;
 ll row[] = {0,0,-1,1};
 ll col[] = {-1,+1,0,0};
bool isval(ll i, ll j)
{
	return(i>=0 && i<m && j>=0 && j<n);
}

using namespace std;
int main()
{
    run

 cin>>m>>n;
 char ar[m][n];
 for0(i,m)
{
	for0(j,n)
	cin>>ar[i][j];
}
ll ans=0;
for0(i,m)
{
	for0(j,n)
	{
		if(ar[i][j]=='P')
		{
			for0(x,4)
			{
				ll r = i + row[x];
				ll c = j + col[x];
				if(isval(r,c))
				{
					if(ar[r][c]=='W')
					{
						ar[r][c]='.';
						ans++;
						break;
					}
				}
			}
		}
	}
}

cout<<ans;

    return 0;
}