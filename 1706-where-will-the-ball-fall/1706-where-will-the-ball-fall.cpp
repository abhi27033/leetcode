class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            ans.push_back(dropBall(grid, i));
        }
        
        return ans;
    }
    
    int dropBall(vector<vector<int>>& grid, int n) {        
        for(int i = 0; i < grid.size(); i++) {                
            if(n == 0 && grid[i][n] == -1 || n == grid[0].size()-1 && grid[i][n] == 1)
                return -1;           
            
            int dir = grid[i][n] == 1 ? grid[i][n] + grid[i][n+1] : grid[i][n] + grid[i][n-1];     
            
            if(dir == 0)
                return -1;         
            
            n += dir/2;  
        }        
        return n;
    }
    
};