class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(auto it:nums)
        {
            m[it]++;
        }
        vector<int> s;
        for(auto it:m)
        {
            s.push_back(it.first);
        }
        int dp[(n+1)];
        for(int i=0;i<n+1;i++)
            dp[i]=0;
        dp[0]=0;dp[1]=s[0]*m[s[0]];
        sort(s.begin(),s.end());
       // for(auto it:s)
        //    cout<<it<<" ";
       // cout<<endl;
      //  for(auto it:m)
        {
        //    cout<<it.first<<" "<<it.second<<endl;
        }
        int i;
        for(i=1;i<s.size();i++)
        {
            if(s[i]-s[i-1]==1){
            dp[i+1]=max(dp[i],dp[i-1]+m[s[i]]*s[i]); //
               // cout<<dp[i+1]<<endl;
            }
            else
            {
            dp[i+1]=dp[i]+m[s[i]]*s[i];
                // cout<<dp[i+1]<<endl;
            }
        }
        //cout<<dp[i]<<endl;
        return dp[i];
    }
};