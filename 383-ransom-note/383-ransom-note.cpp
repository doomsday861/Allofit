class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int fr[26];
        memset(fr,0,sizeof(fr));
        for(auto x:magazine)fr[x-'a']++;
        for(auto x: ransomNote)
        {
            fr[x-'a']--;
            if(fr[x-'a']<0) return 0;
        }
        return 1;
    }
};