class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        vector<long long> left;
        vector<long long> right;
        long long  s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            left.push_back(s);
        }
        s=0;
        right.push_back(0);
        for(int i=n-1;i>0;i--)
        {
            s+=nums[i];
            right.push_back(s);
        }
        /*for(auto it:left)
            cout<<it<<" ";
        cout<<endl;
        for(auto it:right)
            cout<<it<<" ";*/
       // cout<<endl;
        int mi=INT_MAX;
        int pivot=0;
         int temp=0;
        for(int i=0;i<n;i++)
        {
           
            if(n-i-1!=0)
            temp=(left[i]/(i+1))-(right[n-i-1]/(n-i-1));
            else
            temp=(left[i]/(i+1)); 
            if(temp<0)
                temp*=-1;
            if(mi>temp){
                mi=temp;
                pivot=i;
            }
            //cout<<temp<<endl;
        }
        return pivot;
    }
};