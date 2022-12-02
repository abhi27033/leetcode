class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int> w1;
        map<char,int>w2;
        map<int,int>ww1;
        map<int,int>ww2;
        for(auto it:word1)
        {
            w1[it]++;
        }
        for(auto it:word2)
        {
            w2[it]++;
        }
        for(auto it:w1)
        {
            char ch=it.first;
            if(w2.find(ch)==w2.end())
                return false;
            ww1[it.second]++;
           // cout<<it.first<<" "<<it.second<<endl;
        }
        //cout<<"---------------------------------"<<endl;
        for(auto it:w2)
        {
             if(w1.find(it.first)==w1.end())
                return false;
            ww2[it.second]++;
             //cout<<it.first<<" "<<it.second<<endl;
        }
        for(auto it:ww1)
        {
            if(ww2.find(it.first)==ww2.end())
                return false;
            else
            {
                if(ww2[it.first]!=it.second)
                    return false;
            }
        }
        for(auto it:ww2)
        {
            if(ww1.find(it.first)==ww1.end())
                return false;
            else
            {
                 if(ww1[it.first]!=it.second)
                    return false;
            }
        }
        return true;
    }
};