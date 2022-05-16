/**
 * palindrome paritioning 
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
bool ispalin(string s, int i, int j)
{
    while(i<j)
    {
        if(s[i]!=s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
ll rec(string &s, int i, int j,vector<vector<int>>&dp)
{
    if(i>=j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
    if(ispalin(s,i,j))
    {
        return 0;
    }

    ll tmp = INT_MAX;
    ll ans = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int left,right;
        if(dp[i][k]!=-1)
            left = dp[i][k];
        else
            left = rec(s,i,k,dp);
        if(dp[k+1][j]!=-1)
            right = dp[k+1][j];
        else
            right = rec(s,k+1,j,dp);
            
        tmp = left + right + 1;
        ans = min(tmp,ans);
    }
    return dp[i][j] = ans;
}
int main()
{
    run
testcase{
    string s;
    cin>>s;
    vector<vector<int>>dp(s.length(),vector<int>(s.length()+1,-1));
    cout<<rec(s,0,s.length()-1,dp);
}

    return 0;
}
