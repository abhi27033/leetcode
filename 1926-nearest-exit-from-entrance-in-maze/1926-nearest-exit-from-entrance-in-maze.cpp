class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size();
        int n=maze[0].size();
        queue<pair<int,int>>q;
        int i=entrance[0];
        int j=entrance[1];
        q.push({i,j});
        maze[i][j];
        int l=0;
        int dr[4]={0,0,1,-1};
        int dc[4]={1,-1,0,0};
        maze[i][j]='+';
        while(!q.empty()){
            int size=q.size();
            l++;
            for(int k=0;k<size;k++){
            auto x=q.front();
            q.pop();
            int row=x.first;
            int col=x.second;
            for(int j=0;j<4;j++){
                int new_row=row+dr[j];
                 int new_col=col+dc[j];
                 if(new_row>=0 && new_col>=0 && new_row<=m-1 && new_col<=n-1)
                 {
                 if(maze[new_row][new_col]=='+'){
                     continue;
                 }
                 if(new_row==0 || new_col==0 || new_row==m-1 || new_col==n-1){
                     return l;
                 }
                  q.push({new_row,new_col});
                   maze[new_row][new_col]='+';
            }
            }

        }
        }
        return -1;
    }
};