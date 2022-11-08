class Solution {
public:
    string makeGood(string s) {
        stack<char> se;
        for (auto currChar : s) {
            if (!se.empty() && abs(se.top() - currChar) == 32)
                se.pop(); 
            else
                se.push(currChar);
        }
       string ans;
        while(!se.empty()){
            //cout<<se.top();
            ans=se.top()+ans;
        se.pop();}
        return ans;
    }
};