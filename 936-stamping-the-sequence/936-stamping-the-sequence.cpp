class Solution {
public:
    int fixed =0;
    vector<int>ans;
    bool solve(string &target, string &stamp, int start)
    {
        bool is_changed =0;
        for(int i=0;i<stamp.length();i++)
        {
            if(target[i+start]!='*' and target[i+start]!=stamp[i]) return 0;            
        }
        ans.push_back(start);
        for(int i = start;i-start < stamp.length();i++)
        {
            fixed +=(target[i]!='*');
            target[i] = '*';
        }
        return 1;
    }
    vector<int> movesToStamp(string stamp, string target) {
        int n = target.length();
        bool vis[n+1];
        memset(vis,0,sizeof(vis));
        while(fixed<n)
        {
            bool f =0;
            for(int i=0;i <=n-stamp.length() and fixed<n;i++)
            {
                if(!vis[i])
                {
                    f = solve(target,stamp,i);
                    vis[i] = f;
                }
            }
                if(!f) return {};

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};