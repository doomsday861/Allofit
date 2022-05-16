#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool tab(string s, string p)
    {
        vector<vector<int>>dp(p.length()+1,vector<int>(s.length()+1,0));
        dp[0][0] =1;
        
        for(int i=1;i<=p.length();i++)
        {
            bool f =1;
            for(int ii = 1;ii<=i;ii++)
            {
                if(p[ii-1]!='*')
                {
                    f=0;
                    break;
                }
            }
            dp[i][0] = f;
        }
        for(int i=1;i<=p.length();i++)
        {
            for(int j=1;j<=s.length();j++)
            {
                if(p[i-1]==s[j-1]|| p[i-1]=='?')
                {
                dp[i][j] = dp[i-1][j-1];
                }
                else if(p[i-1]=='*')
                {
                 dp[i][j] =  dp[i-1][j]|dp[i][j-1];
                }
                else
                {
                    dp[i][j] =0;
                }
            }
        }
        return dp[p.length()][s.length()];
    }
    bool rec(string &s, string &p, int i, int j,vector<vector<int>>&dp)
    {
        if(i<=0 && j<=0) // both exhausted
            return 1; 
        else if(j>0 && i <=0) //pattern still has some left all have to be *
        {
            for(int ii =1;ii<=j;ii++)
            {
                if(p[ii-1]!='*')
                    return 0;
            }
            return 1;
        }
        else if(j<=0 && i>0) // main string exhausted
            return 0;
        
        else if(dp[i][j]!=-1)
        {
            if(dp[i][j]==1)
                return 1;
            else
                return 0;
        }        
        else if(s[i-1]==p[j-1]|| p[j-1]=='?')
        {
            return dp[i][j] = rec(s,p,i-1,j-1,dp);
        }
        else if(p[j-1]=='*')
        {
            return dp[i][j] =  rec(s,p,i-1,j,dp)||rec(s,p,i,j-1,dp);
        }
        return 0;
    }
    bool isMatch(string s, string p) {
        vector<vector<int>>dp(2002,vector<int> (2002,-1));
        return rec(s,p,s.length(),p.length(),dp);
    }
};
int main()
{
    string s,t;
    cin>>s>>t;
    Solution ob;
    cout<<ob.isMatch(s,t)<<endl;
    cout<<ob.tab(s,t);
}