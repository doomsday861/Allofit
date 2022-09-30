class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>ans;
        int n = buildings.size();
        multiset<int>st;
        vector<vector<int>>b;
        for(int i =0;i<n;i++)
        {
            b.push_back({buildings[i][0],buildings[i][2]*-1});
            b.push_back({buildings[i][1],buildings[i][2]});
        }
        sort(b.begin(),b.end());
        int prev = 0;
        int cur = 0;
        st.insert(0);
        for(auto x:b)
        {
            if(x[1] < 0 ) // starting 
            {
                st.insert(x[1]*-1);
            }
            else // ending
            {
                st.erase(st.find(x[1]));
            }
            cur = *st.rbegin();
            if(cur!=prev)
            {
                ans.push_back({x[0],cur});
                prev = cur;
            }
        }
        return ans;
    }
};


/*
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
  10 
 */