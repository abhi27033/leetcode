class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        int dp[n];
        stack<int> stk;
        for(int i=0;i<n;i++)
        {
            while(!(stk.empty())&&arr[stk.top()]>=arr[i])
                stk.pop();
            if(stk.empty())
            {
                dp[i]=(i+1)*arr[i];
            }
            else
            {
                int j=stk.top();
                dp[i]=dp[j]+(i-j)*arr[i];
            }
            stk.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(dp[i]);
            ans%=1000000007;
        }
            return ans%1000000007;
    }
};