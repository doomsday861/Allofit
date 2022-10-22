class Solution {
public:
    string minWindow(string s, string t) {
        int f[256];
        memset(f,0,sizeof(f));
        string ans ="";
        int st =0;
        int l =0;
        int r =0;
        int len =INT_MAX;
        for(int i=0;i<t.length();i++)
        {
            f[t[i]]++;
        }
        int tmp[256];
        memset(tmp,0,sizeof(tmp));
        bool flag = 0;
        for(int i=0;i<s.length();i++)
        {
            flag=0;
            tmp[s[i]]++;
            for(int j=0;j<256;j++)
            {
                if(tmp[j]<f[j])
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                int en =i;
                while(st<s.length() and f[s[st]]<=(tmp[s[st]]-1))// shifting window to left
                {
                    tmp[s[st]]--;
                    st++;
                }
                if(i-st <len)
                {
                    len = i-st;
                    l = st;
                    r = i;
                }
            }
        }
        if(len==INT_MAX)
            return "";
        for(int i=l;i<=r;i++)
        {
            ans+=s[i];
        }
        return ans;
    }
};