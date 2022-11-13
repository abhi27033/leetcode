class Solution {
public:
    string reverseWords(string s) {
        string an="";
        string word="";
        s+=' ';
        int c=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]!=' '){
               word+=s[i];
               c=1;
               }
            else if(s[i]==' '&&s[i+1]!=' '&&c==1)
            {
                an+=word;
                if(i!=s.size()-1)
                an+=' ';
                word="";
            }
            
        }string ww="",aa="";
        an+=' ';
        for(int i=0;i<an.size();i++)
        {
            if(an[i]!=' ')
                ww+=an[i];
            else{
                aa=ww+aa;
                ww="";
                if(i!=an.size()-1)
                    aa=' '+aa;
            }
                
        }
        //cout<<an;
        return aa;
    }
};