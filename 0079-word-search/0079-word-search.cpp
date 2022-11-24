class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0]&&dp(board,word,i,j,0))
                    return true;
            }
        }
        return false;
    }
    bool dp(vector<vector<char>>&board,string word,int r,int c,int x)
    {
        if(x==word.size())
            return true;
        if(r<0||c<0||r>board.size()-1||c>board[0].size()-1||board[r][c]=='$'||board[r]        [c]!=word[x])
            return false;
        char ch=board[r][c];
        board[r][c]='$';
        bool res=dp(board,word,r+1,c,x+1)||dp(board,word,r,c+1,x+1)||dp(board,word,r-1,c,x+1)||dp(board,word,r,c-1,x+1);
        board[r][c]=ch;
        return res;
    }
};