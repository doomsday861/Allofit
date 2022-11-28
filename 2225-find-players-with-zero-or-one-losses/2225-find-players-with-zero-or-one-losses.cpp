class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> sol(2);
        map<int,int> lost, won;
        vector<int> winners, losers;
        for(int i=0;i<matches.size();i++){
                lost[matches[i][1]]++;
            }
        for(int i=0;i<matches.size();i++){
            
                if(lost.find(matches[i][0])==lost.end() and won.find(matches[i][0])==won.end()){
                    winners.push_back(matches[i][0]);
                    won[matches[i][0]]++;
                }
            }
        for(auto& it: lost){
            if(it.second==1){
                losers.push_back(it.first);
            }
        }
        
        sort(winners.begin(), winners.end());
        sol[0]=winners;
        sol[1]=losers;
        return sol;
    }
};