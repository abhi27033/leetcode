class Solution {
public:
    int cc=0;
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string x(n,'.');
        for(int i=0;i<n;i++)
            board[i]=x;
       solve(ans,board,n,0);
         return cc;
    }
    
    void solve(vector<vector<string>>& ans,vector<string>& board,int r,int c)
    {
        if(c==r)
        {
           cc++;
            return;
        }
        for(int i=0;i<r;i++)
        {
            if(valid(board,i,c,r))
            {
                board[i][c]='Q';
                solve(ans,board,r,c+1);
                board[i][c]='.';
            }
        }
    }
    bool valid(vector<string>&board,int r,int c,int n)
    {
        int row=r;
        int col=c;
        while(c>=0)
        {
            if(board[r][c]=='Q')
                return false;
            c--;
        }
        r=row,c=col;
        while(r>=0&&c>=0)
        {
            if(board[r][c]=='Q')
                return false;
            r--;
            c--;
        }
        r=row,c=col;
        while(r<n&&c>=0)
        {
            if(board[r][c]=='Q')
                return false;
            r++;
            c--;
        }
        return true;
    }
};
