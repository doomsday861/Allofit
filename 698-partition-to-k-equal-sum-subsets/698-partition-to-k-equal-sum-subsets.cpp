class Solution {
public:
    int dp[(1<<16) + 1];
    bool solve(vector<int>&nums,int mask, int cnt, int k,int cursum,int target)
    {
        if(cnt==k) return 1;
        if(mask==(1<<nums.size())-1) return 0;
        if(dp[mask]!=-1)return dp[mask];
        
        bool ans =0;
        for(int i=0;i< nums.size(); i++)
        {
            if(!(mask &(1<<i)))
            {
                mask |=(1<<i);
                if(nums[i]+cursum < target) // include it in the current subset
                {
                    ans |= solve(nums,mask,cnt,k,cursum+nums[i],target);
                    if(ans) {return 1; break;}
                }
                else if(nums[i]+cursum == target)
                {
                    ans |= solve(nums,mask,cnt+1,k,0,target);
                    if(ans) {return 1; break;}
                }
                mask ^=(1<<i);
            }
        }
        return dp[mask] = ans;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int mask =0;
        memset(dp,-1,sizeof(dp));
        int ts =0;
        for(auto x:nums) ts+=x;
        if(ts%k!=0) return 0;
        int target = ts/k;
        return solve(nums,0,0,k,0,target);
    }
};