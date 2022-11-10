class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        if(n==2)
            return 1;
        int goal=0,c=0;
        while(goal<n)
        {
            //c++;
            int l=goal+1;
            int r=goal+nums[goal];
            if(r>=n-1)
                return ++c;
            int j=0;
            int ma=nums[l]+l,idx=l;
            for(j=l;j<=r;j++)
            {
                if(ma<nums[j]+j){
                    ma=nums[j]+j;
                    idx=j;
                       }
            }
            goal=idx;
            c++;
        }
        return c;
    }
};