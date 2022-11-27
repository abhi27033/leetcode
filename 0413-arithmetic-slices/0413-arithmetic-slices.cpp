class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        if(nums.size()==1||nums.size()==2)
            return 0;
        dp[0]=0;
        dp[1]=0;
        int ans=0;
        //sort(nums.begin(),nums.end());
        for(int i=2;i<nums.size();i++)
        {
           if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
               dp[i]=(dp[i-1]+1);
        }
        for(int i=0;i<nums.size();i++)
        {
            ans+=dp[i];
        }
        return ans;
    }
};