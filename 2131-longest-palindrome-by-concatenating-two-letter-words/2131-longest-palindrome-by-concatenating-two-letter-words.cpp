class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int cnt =0;
        unordered_map<string,int>mp;
        int pair =0;
        for(auto &x: words)
        {
            string rev = x;
            reverse(rev.begin(),rev.end());
            if(x[1]==x[0])
            {
                if(mp[x]>0)
                {
                    mp[x]--;
                    cnt+=4;
                    pair--;
                }
                else
                {
                    mp[x]++;
                    pair++;
                }
            }
            else
            {
                if(mp[rev] > 0)
                {
                    cnt+=4;
                    mp[rev]--;
                }
                else
                    mp[x]++;
            }
            
        }
        if(pair>0)cnt+=2;
        return cnt;
    }
};