class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        int n = matrix.size();
        for(int i=0;i<n;i++)
            for(int j = i+1;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
    }
};
//1,1 = 1,n
//1,2 = 2,n
//1,3 = 3,n
//2,1 = 1,2
//2,2 = 2,2
//2,n = n,2
//n,1 = 1,1
//n,2 = 2,1
//n,3 = 3,1
//n =3 

//1,1 = 1,n
//1,2 = 2,n
//1,3 = 3,n
//1,4 = 4,n
//2,1 = 1,3
//2,2 = 2,3
//2,3 = 3,3
//n=4