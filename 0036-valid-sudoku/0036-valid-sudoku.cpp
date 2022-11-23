class Solution {
public:
    bool validBox(int stR,int endRow,int stC,int endCol,vector<vector<char>>& board){
        unordered_set<char> st;
        for(int i=stR;i<=endRow;i++){
            for(int j=stC;j<=endCol;j++){
                if(board[i][j] == '.')continue;
                if(st.find(board[i][j]) != st.end())return false;
                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        // for row validation 
        for(int row=0;row<9;row++){
            unordered_set<char> st;
            for(int col=0;col<9;col++){
                if(board[row][col]=='.')continue;
                if(st.find(board[row][col]) != st.end()){
                    return false;
                }
                st.insert(board[row][col]);
            }
        }
        // for column validation 
        for(int col=0;col<9;col++){
            unordered_set<char> st;
            for(int row=0;row<9;row++){
                if(board[row][col]=='.')continue;
                if(st.find(board[row][col]) != st.end()){
                    return false;
                }
                st.insert(board[row][col]);
            }
        }
        // for 3X3 boxes validation 
        for(int row=0;row<9;row+=3){
            int endRow = row+2;
            for(int col=0;col<9;col+=3){
                int endCol = col+2;
                if(!validBox(row,endRow,col,endCol,board))return false;
            }
        }
        return true;
    }
};