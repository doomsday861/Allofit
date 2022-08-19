class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &x:nums)mp[x]++;
        unordered_map<int,int>subsend;
        for(auto& i:nums)
        {
            if(mp[i]==0)continue;
            mp[i]--;
            if(subsend[i-1]>0){
                subsend[i-1]--;
                subsend[i]++;
            }
            else if(mp[i+1]>0 and mp[i+2]>0){
                subsend[i+2]++;
                mp[i+1]--;
                mp[i+2]--;
            }
            else
                return false;
        }
        return true;
    }
};