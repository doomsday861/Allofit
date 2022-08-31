class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int st=0;
        int en =0;
        int ans =0;
        int n = s.length();
        while(en<n)
        {
            while(mp[s[en]]) mp[s[st]]--,st++;
            mp[s[en]]++;
            ans = max(ans,en-st+1);
            en++;
        }
        return ans;
    }
};