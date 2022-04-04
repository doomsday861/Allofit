#include <bits/stdc++.h>
using namespace std;

class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    long long sum =0;
	    for(int i=0; i <n;i++)
	    sum+=arr[i];
	    
	    int limit = (sum+1)/2;
	    bool dp[n+1][limit+1];
	    for(int i=0;i<=n;i++)
	    {
	    	for(int j=0; j <limit;j++)
	    	{
	    		if(i==0)
	    			dp[i][j]=0;
	    		if(j==0)
	    			dp[i][j]=1;
	    	}
	    }
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=0;j<=limit;j++)
	        {
	            if(j>=arr[i-1])
	            {
	                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
	            }
	            else
	            dp[i][j] = dp[i-1][j];
	        }
	    }
	    // 	    for(int i=0;i<=limit;i++)
	    // {
	    // 	int x = i%10;
	    // 	cout<<x<<" ";
	    // }
	    // cout<<endl;
	    // for(int i=0;i<=n;i++)
	    // {
	    // 	for(int j=0;j<=limit;j++)
	    // 		cout<<dp[i][j]<<" ";
	    // 	cout<<endl;
	    // }
	    int s1=0;
	    int ans= 0;
	    for(int i=limit;i>=0;i--)
	    {
	        if(dp[n][i])
	        {
	        	//cout<<sum<<" "<<i<<endl;
	            ans = (sum-(2*i));
	            break;
	        }
	    }
	    return ans;
	} 
};


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
