class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                    if(dfs(grid,i,j))
                        ans++;
                }
            }
        }
        return ans;
    }
    bool dfs(vector<vector<int>>& grid,int r,int c)
    {
        if(r<0||c<0||r>grid.size()-1||c>grid[0].size()-1)
            return false;
        if(grid[r][c]==2||grid[r][c]==1)
            return true;
        grid[r][c]=2;
        bool x=dfs(grid,r-1,c);
        bool y=dfs(grid,r,c-1);
        bool z=dfs(grid,r+1,c);
        bool a=dfs(grid,r,c+1);
            if(a&&x&&y&&z)
            return true;
        else
            return false;
    }
};