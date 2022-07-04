/**
 * 254bAatcoder
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
ll n;
cin>>n;
ll at[n][n];
at[0][0] = 1;
cout<<1<<endl;
for(ll i=1;i <n;i++)
{
    for(ll j=0; j <=i;j++)
    {
        if(j==0)
        {
            at[i][j]=1;
        }
        else if(j==i)
        {
            at[i][j] =1;
            cout<<1<<endl;
            continue;
        }
        else
        {
            at[i][j] = at[i-1][j-1] + at[i-1][j];
            
        }
        cout<<at[i][j]<<" ";
        
    }
   // cout<<endl;
}


    return 0;
}
