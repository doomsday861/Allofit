class Solution {
public:
    int wm(vector<pair<int,int>>v, long long t)
    {
        int n = v.size();
        long long cursum =0;
        for(int i = 0; i < n; i++)
        {
            cursum +=v[i].second;
            if(t <= cursum) return v[i].first;
        }
        return v[n-1].first;
    }
    long long f(vector<pair<int,int>>v, int x)
    {
        long long ans =0;
        int n = v.size();
        for(int i=0;i<n;i++)
        {
            ans += 1LL * abs(v[i].first - x) * v[i].second;
        }
        return ans;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int,int>>v;
        int n = nums.size();
        long long ts = 0;
        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],cost[i]});
            ts +=cost[i];
        }
        sort(v.begin(),v.end());
   //     for(auto x:v) cout<<x.first<<" "<<x.second<<endl;
        if(ts&1)
        {
            int median = wm(v,(ts+1)/2);
            return f(v,median);
        }
        else
        {
            int median1 = wm(v,ts/2);
            int median2 = wm(v,(ts/2)+1);
      //      cout<<median1<<" "<<median2<<endl;
            int median3 = (median1+median2)/2;
            return f(v,median3);
        }
        return 3;
    }
};