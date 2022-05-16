/**
 * lcs for atcoder
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
string s1,s2;
int lcs(int i, int j)
{
    if(i==s1.length() || j==s2.length())
        return 0;
    if(s1[i]!=s2[j])
    {
        return max(lcs(i+1,j),lcs(i,j+1));
    }
    else
    return lcs(i+1,j+1)+1;
}
int main()
{
    run

cin>>s1>>s2;
int n = s1.length();
int m = s2.length();
int dp[n+1][m+1];
for0(i,n+1)
{
    for0(j,m+1)
    {
        dp[i][j]=0;
    }   
}
//dp[0][0] =1;
for1(i,n)
{
    for1(j,m)
    {
        if(s1[i-1]==s2[j-1])
        {
            dp[i][j] = dp[i-1][j-1] + 1;
        }
        else
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    }
}
string ans ="";
int row = n;
int col = m;
while(row>0 && col > 0)
{
    if(s1[row-1]==s2[col-1])
        {
            ans.push_back(s1[row-1]);
            row--;
            col--;
        }
    else if(dp[row-1][col] > dp[row][col-1])
    {
        row--;
    }
    else
        col--;
}
reverse(bend(ans));
cout<<ans<<endl;
// cout<<dp[n][m];
    return 0;
}
