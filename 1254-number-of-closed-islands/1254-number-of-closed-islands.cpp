class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int closedIslands = 0;

        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[0].size(); j++) {
                // Only check land plots for closed islands.
                if (grid[i][j] == 0 && dfs(grid, i, j)) {
                    closedIslands++;
                }
            }
        }

        return closedIslands;
    }
private:
    bool dfs(vector<vector<int>>& grid, int i, int j) {
        // If it's out of bounds, it cannot be a closed island.
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()) {
            return false;
        } else if (grid[i][j] == 1) {
            return true;
        }

        // Convert to water to avoid re-calculation later on.
        grid[i][j] = 1;

        // You must calculate dfs of all four sides to ensure water conversion of entire subisland.
        bool up = dfs(grid, i-1, j);
        bool down = dfs(grid, i+1, j);
        bool left = dfs(grid, i, j-1);
        bool right = dfs(grid, i, j+1);

        // If it's all surrounded by water, it's a closed island.
        return up && down && left && right;
    }
};