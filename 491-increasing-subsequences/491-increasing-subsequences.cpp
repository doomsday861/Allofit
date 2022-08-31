class Solution {
public:
    set<vector<int>>ans;
    void solve(int idx, vector<int>tmp, int prev,vector<int>&nums)
    {
        if(idx==nums.size())
        {
            if(tmp.size()>=2) ans.insert(tmp);
            return;
        }
        if(prev==-1)
        {
            tmp.push_back(nums[idx]);
            solve(idx+1,tmp,idx,nums);
            tmp.pop_back();
            solve(idx+1,tmp,prev,nums);
        }
        else if(nums[idx]>=nums[prev])
        {
            tmp.push_back(nums[idx]);
            solve(idx+1,tmp,idx,nums);
            tmp.pop_back();
            solve(idx+1,tmp,prev,nums);
        }
        else
            solve(idx+1,tmp,prev,nums);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>tmp;
        for(int i=0;i<nums.size();i++)
        {
            solve(i,tmp,-1,nums);
        }
        vector<vector<int>>rans;
        for(auto x:ans)
        {
            rans.push_back(x);
        }
        return rans;
    }
                
    
};