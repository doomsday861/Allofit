class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>st;
        for(auto &x:sentence)st.insert(x);
        return st.size()==26;
    }
};