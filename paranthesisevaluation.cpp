/**
 * paranthesis evaluation
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
vector<vector<vector<int>>>dp;
    int solve(string &s, int i , int j, bool f)
    {
        if(i>j)
            return 0;
        if(i==j)
        {
            if(f)
            {
                return s[i]=='T';
            }
            else
                return s[i]=='F';
        }
        if(dp[i][j][f]!=-1)
        {
            return dp[i][j][f];
        }
        int ans = 0;
        for(int k = i+1;k<j;k+=2)
        {
           int lT = solve(s,i,k-1,1);
           int lF = solve(s,i,k-1,0);
           int rT = solve(s,k+1,j,1);
           int rF = solve(s,k+1,j,0);
           if(s[k]=='&')
           {
            if(f)
            {
                ans += lT*rT;
            }
            else
            {
                ans+= lT*rF + lF*rT + lF*rF;
            }
           }
           if(s[k]=='|')
           {
            if(f)
            {
                ans += lT*rT + lT*rF + lF*rT;
            }
            else
            {
                ans += rF * lF;
            }
           }
           if(s[k]=='^')
           {
            if(f)
            {
                ans += lT*rF + lF*rT;
            }
            else
            {
                ans += rT*lT + rF*lF; 
            }
           }
        }
        return dp[i][j][f] = ans;
    }
int main()
{
    run
testcase{
    string s;
    cin>>s;
    dp = vector<vector<vector<int>>>(s.size()+1,vector<vector<int>>(s.size()+1,vector<int>(2,-1)));
    cout<<solve(s,0,s.length()-1,1)<<endl;
    
    
}

    return 0;
}
