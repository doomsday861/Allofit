class Solution {
public:
    int characterReplacement(string s, int k) {
        int st =0;
        int en =0;
        vector<int>fr(26,0);
        int n = s.length();
        int ans = 0;
        int curcost =0;
        int maxf =0;
        while(en < n)
        {
            fr[s[en]-'A']++;
            maxf = max(maxf,*max_element(fr.begin(),fr.end()));
                while(((en-st+1)-maxf)>k)
                {
                    ans = max(ans,en-st);
                    fr[s[st]-'A']--;
                    if(fr[s[st]-'A']<0) fr[s[st]-'A']=0;
                    maxf = *max_element(fr.begin(),fr.end());
                    st++;
                }
            ans = max(ans,en-st);
            en++;
        }
        return max(ans,en-st);

}
};
 