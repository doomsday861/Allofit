class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
 //       vector<int>pre;
        int n = nums.size();
        // pre.push_back(0);
        // for(int i=0;i<n;i++)
        // {
        //     if(i==0) pre.push_back(nums[i]);
        //     else
        //         pre.push_back((pre.back()+nums[i]));
        // }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int pre =0;
        for(int i =0;i<n;i++)
        {
            pre +=nums[i];
            pre%=k;
            if(pre==0 and i!=0) return 1;
            if(mp.find(pre)!=mp.end())
            {
                if((i - mp[pre]) > 1) return 1;
            }
            else mp[pre]=i;
        }
        return false;
    }
};
//2,4,1,0,6
