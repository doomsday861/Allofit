//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
 
    public:
    int dfs(int i, int j, int n, int m, int u, int d, vector<vector<char>>&mat,vector<vector<bool>>&vis)
    {
        //cout<<i<<" "<<j<<endl;
        if(i>=n or j>=m or i<0 or j<0 or vis[i][j]==1)
        {
            return 0;
        }
        int cur =1;
        vis[i][j]=1;
        if(j+1<m and mat[i][j+1]=='.')
        cur += dfs(i,j+1,n,m,u,d,mat,vis);
        if(j-1>=0 and mat[i][j-1]=='.')
        cur += dfs(i,j-1,n,m,u,d,mat,vis);
        if(i-1>=0 and u>=1 and mat[i-1][j]=='.')
        {
            cur += dfs(i-1,j,n,m,u-1,d,mat,vis);
        }
        if(i+1<n and d>=1 and mat[i+1][j]=='.')
        {
            cur +=dfs(i+1,j,n,m,u,d-1,mat,vis);
        }

        return cur;
    }
    int numberOfCells(int n, int m, int r, int c, int u, int d, vector<vector<char>> &mat)
    {
        // Your code goes 
        if(mat[r][c]=='#')
            return 0;
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        return dfs(r,c,n,m,u,d,mat,vis);
    }

};

//{ Driver Code Starts.

int main() 
{
    
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, r, c, u, d;
        cin >> n >> m >> r >> c >> u >> d;
        
        vector<vector<char>> mat(n, vector<char>(m, '.'));

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

      

        Solution obj;
        cout << obj.numberOfCells(n, m, r, c, u, d, mat) << "\n";
    
    }

    return 0;
}



// } Driver Code Ends