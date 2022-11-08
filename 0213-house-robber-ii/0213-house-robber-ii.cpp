class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        else{
        vector<int> v1(nums.begin(),nums.end()-1);
         vector<int> v2(nums.begin()+1,nums.end());
        return max(robber(v1),robber(v2));
        }
    }

    int robber(vector<int>& nums) {
      int dp[nums.size()+1];
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i+1]=max(dp[i],dp[i-1]+nums[i]);
        }
        return dp[nums.size()];
  }
};