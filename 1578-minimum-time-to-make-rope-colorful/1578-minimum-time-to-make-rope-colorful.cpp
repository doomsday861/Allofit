class Solution {
public:

    int minCost(string colors, vector<int>& neededTime) {
        int ans =0;
        int n = colors.length();
        stack<pair<char,int>>st;
        int cursum = neededTime[0];
        st.push({colors[0],neededTime[0]});
        for(int i =1 ; i<n; i++)
        {
           char cur = colors[i];
           if(cur==st.top().first)
           {
               st.push({cur,neededTime[i]});
               cursum += neededTime[i];
           }
          else
          {
              int mini = INT_MAX;
              while(!st.empty())
              {
                  mini = min(mini,cursum - st.top().second);
        //          cout<<cursum<<" "<<st.top().second<<" "<<mini<<endl;
                  st.pop();
              }
              ans +=mini;
              st.push({cur,neededTime[i]});
              cursum =neededTime[i];
          }
        }
        int mini = INT_MAX;
        while(!st.empty())
        {
            mini = min(mini,cursum - st.top().second);
        // cout<<cursum<<" "<<st.top().second<<" "<<mini<<endl;
            st.pop();
        }
             ans +=mini;
        return ans;
    }
};