class Solution {
public:
    string removeKdigits(string num, int k) {
       stack<char> st;
        string a="";
        for(int i=0; i <num.length();i++)
        {
            while(k && !st.empty() && st.top()>num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k--)
            st.pop();
        while(!st.empty())
        {
            a +=st.top();
            st.pop();
        }
        reverse(a.begin(),a.end());
        string nz="";
        bool f=0;
        for(int i=0;i < a.length();i++)
        {
            if(a[i]!='0')
                f=1;
            if(f)
                nz +=a[i];
        }
        return nz.size()==0?"0":nz;
    }
};