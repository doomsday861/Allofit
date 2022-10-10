class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.length();
        if(n==1){
            return "";
        }
        bool f =0;
        string ans ="";
        for(int i =0; i <n;i++)
        {
            if(s[i]!='a')
            {
                if(i==n/2 and n&1) continue;
                s[i]='a';
                f=1;
                break;
            }
        }
        if(!f)
        {
           s[n-1] = 'b';
            return s;
        }
        return s;
        
    }
};