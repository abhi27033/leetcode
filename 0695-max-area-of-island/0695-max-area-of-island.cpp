class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if (grid[i][j]==1)
                    ans=max(ans,dfs(grid,i,j));
                //cout<<dfs(grid,i,j)<<" ";
            }
           // cout<<endl;
        }
        return ans;
    }
int dfs(vector<vector<int>>& grid,int r,int c)
    {
        if(r<0||c<0||r>grid.size()-1||c>grid[0].size()-1||grid[r][c]==-1||grid[r][c]==0)
            return 0;
        grid[r][c]=-1;
        return (1+dfs(grid,r+1,c)+dfs(grid,r,c+1)+dfs(grid,r-1,c)+dfs(grid,r,c-1));
    }
};