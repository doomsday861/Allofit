/**
 * 1695C
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
    ll n,m;
bool solver(int i, int j, vector<vll>&grid, ll cursum)
{
    if(i==n-1 and j==m-1)
    {
        cursum +=grid[i][j];
        if(cursum==0)
            return 1;
        else
            return 0;
    }
    if(i>=n or j>=m)
        return 0;
    return solver(i+1,j,grid,cursum+grid[i][j]) or solver(i,j+1,grid,cursum+grid[i][j]);
}
int main()
{
    run
testcase{
    cin>>n>>m;
    vector<vll>grid(n);
    for0(i,n)
    {
        grid[i].resize(m);
        for0(j,m)
        {
            cin>>grid[i][j];
        }
    }
   pair<ll,ll> array[n][m]; //min,max
   for0(i,n)
   {
    for0(j,m)
    {
        if(i==0 and j==0)
        {
            array[0][0] = {grid[0][0],grid[0][0]};
            continue;
        }
        else if(i==0 and j!=0)
        {
            array[i][j].fi = array[i][j-1].fi;
            array[i][j].se = array[i][j-1].se;
        }
        else if(j==0 and i!=0)
        {
            array[i][j].fi = array[i-1][j].fi;
            array[i][j].se = array[i-1][j].se;
        }
        else
        {
            array[i][j].fi = min(array[i-1][j].fi,array[i][j-1].fi);
            array[i][j].se = max(array[i][j-1].se,array[i-1][j].se);
        }
        array[i][j].fi +=grid[i][j];
        array[i][j].se +=grid[i][j];
    }
   }
   //cout<<array[n-1][m-1].fi<<" "<<array[n-1][m-1].se<<endl;
   if(array[n-1][m-1].se>=0 and array[n-1][m-1].fi<=0 and n+m&1)
   {
    cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
    // for0(i,n)
    // {
    //     for0(j,m)
    //     {
    //         cout<<array[i][j].fi<<','<<array[i][j].se<<"  ";
    //     }
    //     cout<<endl;
    // }
    
}


    return 0;
}
