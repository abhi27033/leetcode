class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0;
        vector<map<int,int>> dp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                long d=(long)nums[i]-(long)nums[j];
                if(d>INT_MAX||d<INT_MIN)
                    continue;
                 dp[i][d]++;
                if(!dp[i].count(d))
                    continue;
               
                ans+=dp[j][d];
                dp[i][d]+=dp[j][d];
            }
        }
        return ans;
    }
};