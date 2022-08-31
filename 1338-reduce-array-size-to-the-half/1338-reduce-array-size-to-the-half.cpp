class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(auto &x: arr) mp[x]++;
        vector<int>f;
        for(auto &x:mp)f.push_back(x.second);
        sort(f.begin(),f.end(),greater<int>());
        int rem = 0;
        int cnt=0;
        int i=0;
        while(rem < n/2)
        {
            cnt++;
            rem+=f[i];
            i++;
        }
        return cnt;
    }
};