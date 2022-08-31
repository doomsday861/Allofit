class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        int st=0;
        int en=0;
        vector<int>ans;
        while(en < k)
        {
            while(!dq.empty() and nums[dq.back()]<nums[en])
            {
                dq.pop_back();
            }
            dq.push_back(en);
            en++;
        }
        ans.push_back(nums[dq.front()]);
        int n = nums.size();
        while(en<n)
        {
            if(nums[dq.front()]==nums[st])dq.pop_front();
    
            while(!dq.empty() and nums[dq.back()]<nums[en])
            {
                dq.pop_back();
            }
            dq.push_back(en);
            en++;st++;
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};