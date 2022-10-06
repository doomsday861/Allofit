class TimeMap {
public:
    map<string,vector<pair<int,string>>>mp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end()) return "";
        int low = 0;
        int high = mp[key].size();
        while(low < high)
        {
            int mid = low + (high-low)/2;
            if(timestamp >= mp[key][mid].first)
            {
                low = mid + 1;
            }
            else
                high = mid;
        }
        // if(low < mp[key].size() and mp[key][low].first < timestamp)
        //     low--;
        //cout<<low;
        
        return low > 0 and low <= mp[key].size() ? mp[key][low-1].second : "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */