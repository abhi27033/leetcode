class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1)
        {
            string mi=s;
            for(int i=0;i<s.length();i++)
            {
               // char ch=s[i];
                string temp=s.substr(1,s.length())+s[0];
                mi=min(temp,mi);
                s=temp;
            }
            return mi;
        }
        else
        {
        sort(s.begin(),s.end());
        return s;
        }
    }
};