class Solution {
public:
    int atmost(vector<int>&nums, int k)
    {
        int st =0;
        int en =0;
        int ans=0;
        int odd=0;
        while(en < nums.size())
        {
            if(nums[en]&1)odd++;
            if(odd>k)
            {
                while(odd>k)
                {
                    if(nums[st]&1)odd--;
                    st++;
                }
            }
            ans +=en-st+1;
            en++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        cout<<atmost(nums,k);
        return atmost(nums,k)-atmost(nums,k-1);
    }
};