class Solution {
public:
    bool closeStrings(string word1, string word2) {
        set<char>s1,s2;
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(auto x:word1)
        {
            s1.insert(x);
            f1[x-'a']++;
        }
        for(auto x:word2)
        {
            s2.insert(x);
            f2[x-'a']++;
        }
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        return f1==f2 and s1==s2;
    }
};