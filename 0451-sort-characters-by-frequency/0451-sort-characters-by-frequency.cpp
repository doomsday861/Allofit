class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>f(257,{0,'-'});
        for(auto x:s)
        {
            f[x-'0'].first++;
            f[x-'0'].second = x;
        }
        sort(f.begin(),f.end(),greater<pair<int,char>>());
        string ans ="";
        for(int i =0; i <= 256;i++)
        {
            if(f[i].first==0)continue;
            while(f[i].first!=0)
            {
                ans+=f[i].second;
                f[i].first--;
            }
        }
        return ans;
    }
};