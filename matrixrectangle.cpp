#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        int dp[n+1][m+1];
        for(int i=0; i <n;i++)
        dp[i][0] = M[i][0];
        for(int i=0; i <m;i++)
        dp[0][i] = M[0][i];
        cout<<"here";
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                dp[i][j] +=dp[i-1][j];
            }
        }
        for(int i=0; i < n;i++)
        {
            for(int j=0; j < m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return 3;
    }
};


int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends