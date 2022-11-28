class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;
        for(int i =0; i < matches.size();i++){
            mp[matches[i][0]]=0;
            mp[matches[i][1]]=0;
        }
        for(int i =0;i<matches.size();i++)
        {
            mp[matches[i][1]]--;
        }
        vector<vector<int>>ans(2);
        for(auto x:mp)
        {
            if(x.second == -1) ans[1].push_back(x.first);
            if(x.second == 0) ans[0].push_back(x.first);
        }
        return ans;
    }
};