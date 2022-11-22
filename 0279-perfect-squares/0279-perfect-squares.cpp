class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        for(int i=0;i<=n;i++)
            dp[i]=n;
        dp[0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j*j<=i;j++)
            {
                int s=j*j;
               // if(i-s<0)
                  //  break;
                dp[i]=min(dp[i],1+dp[i-s]);
            }
        }
        return dp[n];
    }
};