class Solution {
public:
    #define ll long long
    int minimumAverageDifference(vector<int>& nums) {
        ll total =0;
        for(auto x:nums) total+=x;
        ll ans = INT_MAX;
        ll cursum =0;
        int n = nums.size();
        int ansindex = -1;
        for(int i =0;i<n;i++)
        {
            cursum +=nums[i];
            int avg = cursum/(i+1);
            if(i == n-1)
            {
                if(ans > avg)
                    return n-1;
                continue;
            }
            int secavg = (total-cursum)/(n-i-1);
            if(ans > abs(avg - secavg))
            {
                ansindex = i;
                ans = abs(avg-secavg);
            }
        }
        return ansindex;
    }
};