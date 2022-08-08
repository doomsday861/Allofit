class Solution {
public:
    int solve(int taken, int n,int val)
    {
        if(taken>n)
            return 1;
        int ans =0;
        for(int i = 1;i<=n;i++)
        {
            if(!(val&(1<<i)))
            {
                if(taken ==0)
                {
                    val |=(1<<i);
                    ans+=solve(2,n,val);
                    val = val&~(1<<i);
                }
                else if(i%taken==0 or taken%i==0)
                {
                    val |=(1<<i);
                    ans +=solve(taken+1,n,val);
                    val = val&~(1<<i);
                }
            }
        }
        return ans;
    }
    int countArrangement(int n) {
        int val =0;
        return solve(0,n,val);
    }
};