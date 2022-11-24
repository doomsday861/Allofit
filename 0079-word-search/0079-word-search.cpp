class Solution {
public:
    bool solve(int x, int y, vector<vector<char>>&b, string &word, int ptr)
    {
        if(ptr == word.size()) return 1;
        if(x < 0 || x >= b.size() || y < 0 || y >= b[0].size() || b[x][y] != word[ptr])
            return 0;
        char temp = b[x][y];
        b[x][y] = '-';
        bool ans = solve(x+1,y,b,word,ptr+1) or solve(x,y-1,b,word,ptr+1) or solve(x-1,y,b,word,ptr+1) or solve(x,y+1,b,word,ptr+1);
        b[x][y] = temp;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i =0; i < board.size(); i++)
        {
            for(int j =0 ; j < board[0].size();j++)
            {
                if(board[i][j] == word[0])
                {
                    if(word.size()==1) return 1;
                    if(solve(i,j,board,word,0)) return 1;
                }
            }
        }
        return 0;
    }
};