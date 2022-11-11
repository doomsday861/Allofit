class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        int prev = nums[0];
        int i =1;
        for(int j = 1;j<nums.size();j++)
        {
            if(nums[j]==prev) continue;
            swap(nums[i],nums[j]);
            prev = nums[i];
            i++;
            cnt++;
        }
        return cnt+1;
    }
};