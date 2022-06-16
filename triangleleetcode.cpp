/**
 * triangle leetcode
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
int solver(vector<vector<int>>&triangle, int row, int col)
{
        if(row==triangle.size())
            return 0;
        
        return triangle[row][col] + min(solver(triangle,row+1,col),solver(triangle,row+1,col+1));
        
}
int minimumTotal(vector<vector<int>>& triangle) {
        return solver(triangle,0,0);
}
int main()
{
    run
    
    int n;
    cin>>n;
    vector<vector<int>>triangle(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            {
                ll x;
                cin>>x;
                triangle[i].pb(x);
            }
    }
    cout<<minimumTotal(triangle);

    return 0;
}
