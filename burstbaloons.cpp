/**
 * burst baloons
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
vector<vector<int>>dp;
class Solution {
public:
    int f(int i, int j, vector<int>&nums)
    {
        if(i>j)
            return 0;
        int cur = INT_MIN;
        if(dp[i][j]!=-1)
            return dp[i][j];
        for(int k=i;k<=j;k++)
        {
            
            int steps = nums[i-1] * nums[k] * nums[j+1]+ f(i,k-1,nums) + f(k+1,j,nums);
            cur = max(steps,cur);
        }
       // cout<<cur<<" ";
        return dp[i][j] = cur;
    }
    int tab(vector<int>&nums)
    {
        int n = nums.size();
        vector<vector<int>>t(n+2,vector<int>(n+2,0));
        for(int i=n;i>=1;i--)
        {
            for(int j = 1;j<=n;j++)
            {
                if(i>j)
                     continue;
                 int cur = INT_MIN;
                for(int k=i;k<=j;k++)
                {
                    int steps = nums[i-1] * nums[k] * nums[j+1]+ t[i][k-1] + t[k+1][j];
                    cur = max(steps,cur);
                }
                t[i][j] = cur;
            }
        }
        return t[1][n];
    }
    int maxCoins(vector<int>& nums) {
        // int n = nums.size();
        nums.pb(1);
        nums.insert(nums.begin(),1);
        // dp.resize(n+1,vector<int>(n+1,-1));
        // return f(1,n,nums);
        return tab(nums);
        
    }
};
int main()
{
    run
ll n;
cin>>n;
vector<int> v;
for0(i,n)
{
    ll x;
    cin>>x;
    v.pb(x);
}
Solution ob;
cout<<ob.maxCoins(v);

    return 0;
}
