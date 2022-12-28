class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int ts =0;
        for(auto x:piles){
            pq.push(x);
            ts +=x;
        }
        while(!pq.empty() and k>0)
        {
            int cur = pq.top();
            pq.pop();
            k--;
            ts -=cur;
            cur = ceil((cur*1.0)/2.0);
            if(cur==0)
                continue;
            pq.push(cur);
            ts +=cur;
        }
        return ts;
    }
};