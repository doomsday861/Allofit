class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = nums[0];
        int second = INT_MAX;
        for(int i =1;i<nums.size();i++)
        {
            if(nums[i] > second) return 1;
            
            else if(nums[i] > first and nums[i] < second)
            {
                second = nums[i];
            }
            else if(nums[i] < first)
            {
                first = nums[i];
            }

        }
        return 0;
    }
};