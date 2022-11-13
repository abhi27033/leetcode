class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1&&dfs(grid,i,j))
                    
                {
                    //cout<<"hi"<<i+1<<" "<<j+1;
                    ans+=cndfs(grid,i,j);
                    //cout<<cndfs(grid,i,j);
                }
            }
        }
        return ans;
    }
    bool dfs(vector<vector<int>>& grid,int r,int c)
    {
        if(r<0||c<0||r>grid.size()-1||c>grid[0].size()-1)
            return false;
        if(grid[r][c]==0||grid[r][c]==2)
            return true;
        grid[r][c]=2;
        bool a=dfs(grid,r+1,c);
        bool b=dfs(grid,r,c+1);
        bool cc=dfs(grid,r-1,c);
        bool d=dfs(grid,r,c-1);
        return a&&b&&cc&&d;
    }
   int cndfs(vector<vector<int>>& grid,int r,int c)
    {
        if(r<0||c<0||r>grid.size()-1||c>grid[0].size()-1||grid[r][c]==0||grid[r][c]==3)
            return 0;
        grid[r][c]=3;
        return(1+cndfs(grid,r+1,c)+cndfs(grid,r,c+1)+cndfs(grid,r-1,c)+cndfs(grid,r,c-1));
        //return a&&b&&cc&&d;
    }
};