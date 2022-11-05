class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        //int i=0,j=0,flg=0;
        vector<int> ans;
        map<int,int> a;
        for(int i=0;i<n;i++)
        {
         int cc=target-nums[i];
            if(a.find(cc)!=a.end())
            {
                ans.push_back(a[cc]);
                ans.push_back(i);
                return ans;
            }
            a[nums[i]]=i;
        }
       
        return ans;
    }
};