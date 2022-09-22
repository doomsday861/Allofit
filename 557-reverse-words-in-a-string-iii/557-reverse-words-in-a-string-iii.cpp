class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string tmp;
        int n = s.length();
        for(int i =0; i<n; i++)
        {
            char x = s[i];
            if(x==' ')
            {
                reverse(tmp.begin(),tmp.end());
                ans +=tmp;
                ans +=' ';
                tmp = "";
            }
            else
            {
                tmp +=x;
            }
        }
        reverse(tmp.begin(),tmp.end());
        ans += tmp;
        return ans;
    }
};