class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int cnt =0;
        sort(nums.begin(),nums.end());
        int mex =nums[0];
        for(int i=0; i < nums.size();i++)
        {
            if(mex <= nums[i])
            {
                mex = nums[i]+1;
            }
            else
            {
                cnt += mex - nums[i];
                mex++;
            }
        }
        return cnt;
    }
};