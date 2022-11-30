class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>f;
        for(auto x:arr)
            f[x]++;
        set<int>st;
        set<int>st2;
        for(auto x:f)
        {
            st.insert(x.first);
            st2.insert(x.second);
        }
        if(st.size()!=st2.size()) return 0;
        return 1;
    }
};