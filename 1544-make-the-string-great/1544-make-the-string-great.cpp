class Solution {
public:

    string makeGood(string s) {
       stack<char>st;
        for(int i =0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(isupper(st.top()) and islower(s[i]) and tolower(s[i]) == tolower(st.top()))
            {
                st.pop();
            }
            else if(islower(st.top()) and isupper(s[i]) and tolower(s[i]) == tolower(st.top()))
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        string ans ="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};