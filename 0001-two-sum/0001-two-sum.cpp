class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=0,flg=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((nums[i]+nums[j])==target){
                    flg=1;
                    break;
                }
            }
            if(flg==1)
                break;
        }
        //cout<<i<<" "<<j<<endl;
        vector<int> ans;
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
};