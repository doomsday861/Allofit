class Solution {
public:
    vector<int>ans;
    int cap;
    void solve(int len, int k, string st)
    {
        if(len==cap)
        {
            ans.push_back(stoi(st));
            return;
        }
        char last = st.back();
        char forward = last+k;
        if(forward <='9')
        {
            solve(len+1,k,st+forward);
        }
        char backward = last-k;
        if(backward==forward)return;
        if(backward >='0')
        {
            solve(len+1,k,st+backward);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        cap = n;
        for(int i=1;i<=9;i++)
        {
            solve(1,k,to_string(i));
        }
        return ans;
    }
};