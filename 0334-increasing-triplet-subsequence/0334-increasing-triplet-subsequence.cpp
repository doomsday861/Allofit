class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = nums[0];
        int second = INT_MAX;
        for(auto &x: nums)
        {
            if(x > second) return 1;
            
            else if(x > first and x < second)
            {
                second = x;
            }
            else if(x < first)
            {
                first =x;
            }

        }
        return 0;
    }
};