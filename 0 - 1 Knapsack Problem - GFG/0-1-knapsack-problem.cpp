//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1002][1002];
    int solve(int item, int currentwt, int wt[], int val[], int n)
    {
        if(item==n) return 0;
        
        int take =0;
        int nottake =0;
        if(dp[item][currentwt]!=-1)
        return dp[item][currentwt];
        if(currentwt - wt[item] >=0)
        {
            take = val[item] + solve(item+1,currentwt-wt[item],wt,val,n);
        }
        nottake = solve(item+1,currentwt,wt,val,n);
        return dp[item][currentwt] = max(take,nottake);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(dp,-1,sizeof(dp));
       return solve(0,W,wt,val,n);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends