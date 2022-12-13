//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[1001][1001];
    int solve(int i, int cw, int val[], int wt[], int N)
    {
        if(i == N) return 0;
        if(cw == 0) return 0;
        int take =0;
        int nottake =0;
        if(dp[i][cw]!=-1) return dp[i][cw];
        if(cw - wt[i] >=0)
        {
            take = val[i] + solve(i,cw-wt[i],val,wt,N);
        }
        nottake = solve(i+1,cw,val,wt,N);
        return dp[i][cw] = max(take,nottake);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(0,W,val,wt,N);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends