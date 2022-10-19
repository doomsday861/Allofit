class Solution {
public:
    bool pass(string s)
    {
        
        string h ="";
        h += s[0];
        h+=s[1];
        string m ="";
        m +=s[3];
        m +=s[4];
        int hr = stoi(h);
        int min = stoi(m);
        return (hr <=23 and min <=59);
    }
    int fnc(int idx, string &time, string cur)
    {
        if(idx==5)
        {
            if(pass(cur)) return 1;
            return 0;
        }
        if(cur[idx]!='?') return fnc(idx+1,time,cur);
        int ans = 0;
        if(idx<2)
        {
            if(idx==0)
            {
                cur[idx] = '0';
                ans += fnc(idx+1,time,cur);
                cur[idx] = '1';
                ans +=fnc(idx+1,time,cur);
                cur[idx] = '2';
                ans +=fnc(idx+1,time,cur);
            }
            if(idx==1)
            {
                for(int i =0; i <=9;i++)
                {
                    cur[idx] = i+'0';
                    ans +=fnc(idx+1,time,cur);
                }
            }
        }
        if(idx>2)
        {
             for(int i =0; i <=9;i++)
                {
                    cur[idx] = i+'0';
                    ans +=fnc(idx+1,time,cur);
                }
        }
        return ans;
    }
    int countTime(string time) {
        string cur = time;
        return fnc(0,time,cur);
    }
};