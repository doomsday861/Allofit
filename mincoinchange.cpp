// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
#define ll long long 
  public:
    long long int count(int S[], int n, int sum) {
    	vector<ll> prev(sum+1,0);
    	vector<ll> cur(sum+1,0);
    	for(int i=1;i<=sum;i++)
    	{
    		if(i%S[0]==0)
    			prev[i] = i/S[0];
    		else
    			prev[i] = INT_MAX-1;
    	}
    	for(int i=2;i<=n;i++)
    	{
    		for(int j=0;j<=sum;j++)
    		{
    			if(j>=S[i-1])
    			cur[j] = min(1+cur[j-S[i-1]],prev[j]);
    			else
    				cur[j] = prev[j];
    		}
    		prev = cur;
    	}
    	// for(ll i=0;i<=n;i++)
    	// {
    	// 	for(ll j=0;j<=sum;j++)
    	// 	cout<<dp[i][j]<<" ";
    	// 	cout<<endl;
    	// }
    	if(prev[sum]==INT_MAX || prev[sum] == INT_MAX-1)
    		return -1;
    	return prev[sum];
        
    }
};

int main() {

        int n, m;
        cin >> m >> n;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;

    return 0;
}  // } Driver Code Ends