class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int l =0;
        int r = tokens.size()-1;
        int cnt =0;
        int score=0;
        while(l <= r)
        {
            if(power - tokens[l] >= 0)
            {
                power -= tokens[l++];
                cnt++;
                score = max(cnt,score);
            }
            else if(score >=1)
            {
                cnt--;
                power += tokens[r--];
            }
            else break;
        }
        return score;
    }
};