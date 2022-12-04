class Solution {
public:
    int dfs(vector<pair<int,int>> g[],int& sp,vector<int> &visit,int s){
        visit[s]=1;
        
        for(auto x:g[s]){
            if(visit[x.first]==0){
                
                dfs(g,sp,visit,x.first);
            }
           sp=min(x.second,sp);
        }
         
        return sp;
    }
    int minScore(int n, vector<vector<int>>& roads) {
        int shp=INT_MAX;//shp
        vector<pair<int,int>> g[n+1];
        vector<int> visit(n+1);
        for(int i=0;i<=n;i++){
            visit[i]=0;
        }
        for(auto x:roads){
            g[x[0]].push_back(make_pair(x[1],x[2]));
            g[x[1]].push_back(make_pair(x[0],x[2]));
        }
        shp=dfs(g,shp,visit,1);
        return shp;
    }
};