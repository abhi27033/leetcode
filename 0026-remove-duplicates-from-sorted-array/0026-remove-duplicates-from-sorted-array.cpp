class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=nums[0];
        int j=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==temp)
                continue;
            else{
                nums[j++]=nums[i];
            temp=nums[i];
            }
        }
        
        return j;
    }
};