class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int st =0;
        int en =0;
        int stretch =0;
        int ans =0;
        int n = nums.size();
        while(en < n)
        {
          //  cout<<st<<" "<<en<<endl;
            if(nums[en]==0) stretch++;
            
            while(stretch > k)
            {
                if(nums[st]==0)stretch--;
                st++;
            }
            ans = max(ans,en-st+1);
            en++;
        }
        return ans;
    }
};