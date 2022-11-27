class Solution {
public:
    #define ll long long
    map<pair<ll,ll>,int>dp;
    unordered_map<ll,ll>exist;
    int solve(int idx,  ll diff, ll last, vector<int>&nums)
    {
        if(idx == nums.size()) return 0;
        int ans =0;
        if ( diff < INT_MIN or diff > INT_MAX) return 0;
        pair<ll,ll>p = {diff,last};
        if(dp.find(p)!=dp.end()) return dp[p];
        for(int i = idx; i < nums.size(); i++)
        {
            if((ll)(nums[i] - (ll)nums[last]) == diff)
            {
                ans += 1 + solve(i+1,diff,i,nums);
            }
        }
        return dp[p] = ans;
    }
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++) exist[nums[i]]++;
        int ans =0;
        for(int i =0;i<n;i++)
        {
            for(int j =i+1;j<n;j++)
            {
                if(exist.find((ll)((ll)(2LL*nums[j])-(ll)nums[i])) != exist.end())
                ans += solve(j+1,(ll)nums[j]-(ll)nums[i],j,nums);
            }
        }
        return ans;
    }
};