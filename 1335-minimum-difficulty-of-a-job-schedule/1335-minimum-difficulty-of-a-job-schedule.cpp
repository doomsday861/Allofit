class Solution {
public:
    int dp[301][11][1001];
        int fnc(int idx, int days, int curmax, vector<int>&v, int d)
        {
            if(days > d) return INT_MAX-20000;
            if(idx==v.size())
            {
                if(days==d)
                    return curmax;
                else
                    return INT_MAX-20000;
            }
            if(dp[idx][days][curmax]!=-1) return dp[idx][days][curmax];
            curmax = max(curmax, v[idx]);
            int cut = curmax + fnc(idx+1,days+1,0,v,d);
            int notcut = fnc(idx+1,days,curmax,v,d);
            return dp[idx][days][curmax] = min(cut,notcut);
        }
        
        int minDifficulty(vector<int>& jobDifficulty, int d) {
            memset(dp,-1,sizeof(dp));
        int n = jobDifficulty.size();
        if(d>n) return -1;
        if(d==n) return accumulate(jobDifficulty.begin(),jobDifficulty.end(),0);
        return fnc(0,0,0,jobDifficulty,d);
    }
};