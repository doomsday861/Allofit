class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int,int>>vpp(n);
        for(int i=0;i<n;i++)
        {
            vpp[i].second = plantTime[i];
            vpp[i].first = -1*growTime[i];
        }
        sort(vpp.begin(),vpp.end());
        int ans =0;
        int curtime =0;
        for(int i =0; i <n;i++)
        {
            ans = max(ans, curtime + vpp[i].second - vpp[i].first);
            curtime += vpp[i].second;
        }
        return ans;
    }
};