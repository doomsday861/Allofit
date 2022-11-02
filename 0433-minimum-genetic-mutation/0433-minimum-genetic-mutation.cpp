class Solution {
public:
    int solve(string s, string &end, unordered_map<string,bool>&mp,unordered_map<string,bool>vis)
    {
        if(s==end) return 0;
        int ans = INT_MAX-10000;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                s[i]='C';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='G';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='T';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='A'; 
            }
            else if(s[i]=='C')
            {
                s[i]='A';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='G';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='T';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='C';                 
            }
            else if(s[i]=='G')
            {
                s[i]='C';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='A';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='T';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='G'; 
            }
            else if(s[i]=='T')
            {
                s[i]='C';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='G';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='A';
                if(mp.find(s)!=mp.end() and vis[s]==0)
                {
                    vis[s]=1;
                    ans = min(ans, 1 + solve(s,end,mp,vis));
                    vis[s] = 0;
                }
                s[i]='T'; 
            }
        }
        return ans;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_map<string,bool>ismap;
        unordered_map<string,bool>vis;
        for(auto x:bank){
            ismap[x]=1;
            vis[x] =0;
        }
        int ans = solve(start,end,ismap,vis);
        if(ans > 1000) return -1;
        return ans;
    }
};