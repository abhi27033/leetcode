class Solution {
public:
    int climbStairs(int n) {
       long dp[50];
        dp[0]=1;
        dp[1]=2;
        dp[2]=3;
        for(int i=3;i<50;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n-1];
    }
};