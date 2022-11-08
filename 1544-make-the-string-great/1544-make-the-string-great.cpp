class Solution {
public:
    string makeGood(string s) {
        while(s!=good(s)){
            s=good(s);
            if(s=="")
                break;
        }
        return s;
    }
    string good(string s)
    {
        for(int i=0;i<s.length()-1;i++)
        {
           if((isupper(s[i])&&s[i+1]==tolower(s[i]))||(islower(s[i])&&s[i+1]==toupper(s[i])))    
           {
               s=s.substr(0,i)+s.substr(i+2);
               if(s=="")
                   return s;
               i--;
           }
        }
        return s;
    }
};