class Solution {
public:
    int firstUniqChar(string s) {
        int f[26];
        memset(f,0,sizeof(f));
        int cnt = -1;
        for(auto x:s)
        {
            f[x-'a']++;
        }
        int ans = -1;
        int i=-1;
        for(int i=0;i<s.length();i++)
        {
            if(f[s[i]-'a']==1) return i;
        }
        return -1;
    }
};