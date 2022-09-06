class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<long long>rooms(n,0);
        vector<long long>used(n,0);
        sort(meetings.begin(),meetings.end());
        for(int i=0;i<meetings.size();i++)
        {
            int roomtouse =0;
            int startime = meetings[i][0];
            for(int j=0;j<n;j++)
            {
                if(rooms[j]<startime)
                {
                    rooms[j] = startime;
                }
                if(rooms[j] < rooms[roomtouse])
                {
                    roomtouse = j;
                }
            }
            used[roomtouse]++;
            rooms[roomtouse] += (meetings[i][1]-startime)*1LL;
        }
        int ans=0;
        int curmax=0;
        for(int i=0;i<n;i++)
            if(used[i]>curmax){
                curmax = used[i];
                ans =i;
            }
        return ans;
    }
};