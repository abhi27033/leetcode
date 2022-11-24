class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board)
    {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char ch='1';ch<='9';ch++)
                    {
                        if(valid(board,i,j,ch))
                        {
                            board[i][j]=ch;
                        if(solve(board)==true)
                            return true;
                        else
                           board[i][j]='.';
                    }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool valid(vector<vector<char>>& board,int r,int c,char ch)
    {
        for(int i=0;i<9;i++)
        {
            if(board[r][i]==ch)
                return false;
            if(board[i][c]==ch)
                return false;
            if(board[3*(r/3)+i/3][3*(c/3)+i%3]==ch)
                return false;
        }
        return true;
    }
};