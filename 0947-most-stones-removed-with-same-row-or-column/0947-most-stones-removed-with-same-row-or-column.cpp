class Solution {
public:
int dfs(int i,vector<int>adj[],vector<int>&vis){
        vis[i]=1;
        int ans=0;
    for(auto it:adj[i]){
        if(!vis[it]){
            ans+=1+dfs(it,adj,vis);
        }
    }

    return ans;
}
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1])
                adj[i].push_back(j);
            }
                
        }
      vector<int>removed(n,0);
            int ans=0;

        for(int i=0;i<n;i++){
                if(!removed[i]){
                    ans+=(dfs(i,adj,removed));
                }
        }
        return ans;
    }
};