class Solution {
public:
   struct cmp{
    bool operator()(pair<int,string> a,pair<int,string> b){
        if(a.first==b.first) return a.second>b.second;
        return a.first<b.first;
    }
};
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        unordered_map<string,int>mp;
    priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>pq;
        int id =0;
        for(auto &x:words)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        while(k--)
        {
            auto x = pq.top();
            ans.push_back(x.second);
            pq.pop();
        }
        return ans;
        
    }
};