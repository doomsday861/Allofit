class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ts=0;
        int st=0;
        int en=0;
        unordered_map<int,int>mp;
        int n = nums.size();
        int ans = INT_MIN;
        while(en<n)
        {
            ts+=nums[en];
            while(mp[nums[en]]){
                mp[nums[st]]--;
                ts -=nums[st];
                st++;
            }
            mp[nums[en]]++;
            en++;
            ans = max(ans,ts);            
        }
        return ans;
    }
};