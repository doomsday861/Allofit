class Solution {
public:
    vector<int> PSE(vector<int>& v)
    {
        stack<int>st;
        vector<int>left(v.size());
        for(int i=0;i<v.size();i++)
        {
            while(!st.empty() and v[st.top()] > v[i])
            {
                st.pop();
            }
            if(st.empty()) left[i] = i+1;
            else
                left[i] = i - st.top();
            st.push(i);
        }
        return left;
    }
    vector<int> NSE(vector<int>&v)
    {
        stack<int>st;
        vector<int>right(v.size());
        int n = v.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and v[st.top()] >= v[i])
            {
                st.pop();
            }
            if(st.empty()) right[i] = n-i;
            else
                right[i] = st.top()-i;
            st.push(i);
        }
        return right;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> l = PSE(arr);
        vector<int> r = NSE(arr);
        int cnt =0;
        int mod = 1000000007;
        // for(auto x:l)cout<<x<<" ";
        // cout<<endl;
        // for(auto x:r)cout<<x<<" ";
        // cout<<endl;
        for(int i=0;i<arr.size();i++)
        {
            int lefti =  (i - l[i])+1;
            int righti = (r[i] - i)+1;
            long long prod = (l[i]*r[i])%mod;
            prod = (prod*arr[i])%mod;
            cnt = (cnt+prod)%mod;
        }
        return cnt;
    
    }
};