class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<int> b;
        int n = arr.size();
        int ans =0;
        for(int i =0; i < n;i++)
        {
            int x =0;
            unordered_set<char>st;
            for(int j =0;j<arr[i].length();j++)
            {
                int ch =(int) arr[i][j]-'a';
                st.insert(arr[i][j]);
                x = x|1<<ch;
            }
            if(st.size() == arr[i].length())
                b.push_back(x);
        }
        int len = b.size();
        for(int mask =1;mask<=pow(2,n);mask++)
        {
            int curmax =0;
            int curbit = 0;
            for(int j =0;j<len;j++)
            {
                if(mask&(1<<j) and ((curbit & b[j]) ==0 ))
                {
                    curmax += __builtin_popcount(b[j]);
                    curbit |=b[j];
                }
            }
            ans = max(ans,curmax);
        }
        return ans;
    }
};