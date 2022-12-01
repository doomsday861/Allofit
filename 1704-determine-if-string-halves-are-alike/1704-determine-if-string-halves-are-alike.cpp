class Solution {
public:
  bool isvow(char v) {
    return (0x208222>>(v&0x1f))&1;
}
    bool halvesAreAlike(string s) {
       int v=0;
        for(int i =0;i<s.length();i++)
        {
            if(isvow(s[i]))
            {
                if(i < s.length()/2) v++;
                else
                    v--;
            }
        }
        return v==0;
    }
};