class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        map<int,int>mp;
        vector<int>ans;
        if(changed.size()&1)return {};
        sort(changed.begin(),changed.end());
        for(auto &x:changed)
        {
           mp[x]++;
        }
        for(auto &x: changed)
        {
            if(mp[x]==0) continue;
            if(mp[x*2]==0) return {};
            ans.push_back(x);
            mp[x]--;
            mp[x*2]--;
        }
        return ans;
    }
};