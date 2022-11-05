class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>a(n+1);
        for (int i=2;i<=n;i++){
            int one=a[i-1]+cost[i-1];
            int two=a[i-2]+cost[i-2];
            a[i]=min(one,two);
        }
        return a[n];
    }
};