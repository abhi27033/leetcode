class Solution {
public:
    static bool comp(pair<char,int>&a,pair<char,int>&b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
        map<char,int> m;
        for(auto it:s)
        {
            m[it]++;
        }
        vector<pair<char,int>> mm(m.begin(),m.end());
        string ans="";
        sort(mm.begin(),mm.end(),comp);
        for(auto it:mm)
        {
            for(int i=0;i<it.second;i++)
                ans+=it.first;
        }
        return ans;
    }
};