class Solution {
public:
    int atmost(vector<int>&nums, int k)
    {
        int st=0;
        int en=0;
        unordered_map<int,int>mp;
        int ans =0;
        int n = nums.size();
        while(en<n)
        {
            mp[nums[en]]++;
            if(mp.size()>k)
            {
                while(mp.size()>k)
                {
                    mp[nums[st]]--;
                    if(mp[nums[st]]==0) mp.erase(nums[st]);
                    st++;
                }
            }
            ans += en-st+1;
            en++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};