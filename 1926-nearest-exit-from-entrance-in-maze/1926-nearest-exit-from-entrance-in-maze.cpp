class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<pair<int,int>,int>>q;
        // {{i,j},dist};
        int dist =0;
        q.push({{entrance[0],entrance[1]},0});
        auto cur = q.front();
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
//            cout<<cur.first.first<<" "<<cur.first.second<<" "<<cur.second<<endl;
            if((cur.first.first ==maze.size()-1 or cur.first.second==maze[0].size()-1) or cur.first.first ==0 or cur.first.second ==0)
            {
//                cout<<"found";
                if(cur.first.first!=entrance[0] or cur.first.second!=entrance[1])
                    return cur.second;
            }
            if(cur.first.first-1 >= 0 and maze[cur.first.first-1][cur.first.second]!='+')
            {
                maze[cur.first.first-1][cur.first.second]='+';
                q.push({{cur.first.first-1,cur.first.second},cur.second+1});
            }
           if(cur.first.first+1 < maze.size() and maze[cur.first.first+1][cur.first.second]!='+')
            {
                maze[cur.first.first+1][cur.first.second]='+';
                q.push({{cur.first.first+1,cur.first.second},cur.second+1});
            }
            if(cur.first.second-1 >= 0 and maze[cur.first.first][cur.first.second-1]!='+')
            {
                maze[cur.first.first][cur.first.second-1]='+';
                q.push({{cur.first.first,cur.first.second-1},cur.second+1});
            }
            if(cur.first.second+1 < maze[0].size() and maze[cur.first.first][cur.first.second+1]!='+')
            {
                maze[cur.first.first][cur.first.second+1]='+';
                q.push({{cur.first.first,cur.first.second+1},cur.second+1});
            }
        }
        return -1;
    }
};