#include<bits/stdc++.h> 
using namespace std; 


class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        bool dp[N+1][sum+1];
        for(int i=0;i<=N;i++)
        	dp[i][0] = 1;
        for(int i=0;i<=sum;i++)
        	dp[0][i] = 0;
        dp[0][0] =1;
        for(int i=1;i <=N;i++)
        {
            for(int j=1; j <=sum;j++)
            {
   
                if(j>=arr[i-1])
                {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
                else
                dp[i][j] = dp[i-1][j];
            }
        }
    for(int i=0;i<=N;i++)
    {
    	for(int j=0;j<=sum;j++)
    		cout<<dp[i][j]<<" ";
    	cout<<endl;
    }
    return dp[N][sum];
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
