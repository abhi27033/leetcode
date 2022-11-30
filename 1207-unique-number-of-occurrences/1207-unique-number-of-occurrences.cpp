class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> x;
        for(auto it:arr)
        {
            x[it]++;
        }
        set<int>xy;
        for(auto it:x)
        {
            if(xy.find(it.second)==xy.end())
                xy.insert(it.second);
            else
                return false;
        }
        return true;
    }
};