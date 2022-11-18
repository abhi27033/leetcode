class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int l = 0;
        int r = 0;
        unordered_set<int> tm;
        for(r=0; r < s.size(); r++){
            while(tm.count(s[r])){
                tm.erase(s[l]);
                l++;
            }
            tm.insert(s[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }
};