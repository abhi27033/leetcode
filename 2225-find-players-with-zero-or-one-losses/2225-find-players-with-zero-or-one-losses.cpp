class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> dd;
      
        //cout<<ma<<endl;
        vector<vector<int>> x;
        vector<int> ze;
        vector<int> on;
        map<int,int> defeat;
        for(int i=0;i<matches.size();i++)
        {
           defeat[matches[i][1]]++;
            dd.insert(matches[i][1]);
             dd.insert(matches[i][0]);
        }
        for(auto it:dd)
        {
            if(defeat[it]==0)
                ze.push_back(it);
        }
        for(auto it:defeat)
        {
            if(it.second==1)
                on.push_back(it.first);
        }
        x.push_back(ze);
        x.push_back(on);
        return x;
    }
};