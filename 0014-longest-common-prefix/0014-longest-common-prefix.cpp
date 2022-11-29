class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string first=strs[0];
        for(int j=0;j<first.size();j++)
        {
        for(int i=1;i<strs.size();i++)
        {
            if(first[j]!=strs[i][j])
                return ans;
        }
            ans+=first[j];
        }
        return ans;
    }
};