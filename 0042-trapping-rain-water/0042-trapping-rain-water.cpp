class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lf;
       
        int ma=height[0];
        //lf.push_back(ma);
        for(auto it:height)
        {
            if(ma<it)
                ma=it;
            lf.push_back(ma);
        }
        int s=height.size();
         vector<int> rt(s,0);
        ma=height[s-1];
        for(int i=s-1;i>=0;i--)
        {
            if(ma<height[i])
                ma=height[i];
            rt[i]=ma;
        }
       int ans=0;
        for(int i=0;i<s;i++)
        {
            ans+=(min(lf[i],rt[i])-height[i]);
        }
        return ans;
    }
};