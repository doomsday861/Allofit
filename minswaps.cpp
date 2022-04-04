#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int ans=INT_MAX;
        int cnt=0;
        int needed=0;
       for(int i=0; i < n;i++)
       {
       		if(arr[i]<=k)
       			needed++;
       }
       for(int i=0;i<n-needed;i++)
       {
       	cnt=0;
       	for(int j = i;j<i+needed;j++)
       	{
       		if(arr[j]>k)
       			cnt++;
       	}
       	ans = min(ans,cnt);
       }
       return ans;
    }
};


int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
