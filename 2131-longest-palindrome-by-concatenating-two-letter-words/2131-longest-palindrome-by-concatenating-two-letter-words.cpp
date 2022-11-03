class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        int cnt =0;
        for(auto x:words)
        {
            char a = x[1];
            char b = x[0];
            string rev = x;
            reverse(rev.begin(),rev.end());
            if(mp[rev])
            {
                cnt+=4;
                mp[rev]--;
            }
            else
                mp[x]++;
        }
        for(auto x:mp)
        {
            if(x.second > 0)
            {
                string rev = x.first;
                reverse(rev.begin(),rev.end());
                if(x.first==rev)
                {
                    cnt+=2;
                    return cnt;
                }
            }
        }
        return cnt;
    }
};