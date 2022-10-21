class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
        int st =0;
        int en = 1;
        int n = nums.size();
        while(en < n and en<=k)
        {
            mp[nums[en]]++;
            en++;
        }
        if(mp[nums[st]]) return true;
        st++;
        while(en<n)
        {
            mp[nums[st]]--;
            if(mp[nums[st]]==0) mp.erase(mp[nums[st]]);
            mp[nums[en]]++;
            if(mp[nums[st]]) return true;
            st++;
            en++;
        }
        for(auto x:mp) if(x.second>1) return 1;
        return 0;
    }
};