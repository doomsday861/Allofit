class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int start = matrix[0][m-1];
        int i = 0;
        int j =m-1;
        while(j >=0 and i < n)
        {
            start = matrix[i][j];
           // cout<<start<<endl;
            if(start == target)
            {
                return 1;
            }
            else if(start > target)
            {
                j--;
            }
            else if(start < target)
            {
                i++;
            }
            else
                return 0;
        }
        return 0;
    }
};