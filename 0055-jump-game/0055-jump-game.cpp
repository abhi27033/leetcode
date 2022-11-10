class Solution {
public:
    bool canJump(vector<int>& nums) {
          int n=nums.size();
        int goal=n-1,i=n-2;
        if(n==1)
            return true;
        while(i>=0)
        {
            while(i>=0&&nums[i]+i<goal)
            {
                i--;
            }
            if(i<0)
                return false;
            else{
                goal=i;i--;}
            //cout<<goal<<" "<<i<<endl;
            if(goal==0)
                return true;
        }
        return false;
    }
    
};