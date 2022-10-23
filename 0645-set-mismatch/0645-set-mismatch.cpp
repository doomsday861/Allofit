class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>st;
        int prev = 0;
        int repeat = -1;
        long long ts =0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
            ts +=nums[i];
            if(st.size() != (prev+1))
            {
                repeat = nums[i];
            }
            prev = st.size();
        }
        int missing = (n*(n+1))/2 - (ts-repeat);
        return {repeat,missing};
    }
};