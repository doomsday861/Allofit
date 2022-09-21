class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int ts =0;
        vector<int> ans;
        for(auto x:nums) if(x&1^1) ts+=x;
        for(auto v:queries)
        {
            if(nums[v[1]]&1^1)
            {
                ts -= nums[v[1]];
                nums[v[1]] +=v[0];
                if(nums[v[1]]&1^1) ts += nums[v[1]];
            }
            else
            {
                 nums[v[1]] +=v[0];
                if(nums[v[1]]&1^1) ts += nums[v[1]];
            }
            ans.push_back(ts);
        }
        return ans;
    }
};