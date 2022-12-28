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
     //       cout<<cur<<endl;
            cur = ceil((cur*1.0)/2.0);
     //       cout<<cur<<endl;
            if(cur==0)
                continue;
            pq.push(cur);
            ts +=cur;
        }
        // while(!pq.empty())
        // {
        //     cout<<pq.top()<<" ";
        //     pq.pop();
        // }
        return ts;
    }
};