class Solution {
public:
    string reverseVowels(string s) {
       int l=0,r=s.length()-1;
        //cout<<l<<" "<<r<<endl;
      do
        {
            //cout<<"hi\n";
            while(l<=r){
                if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'||s[l]=='A'||s[l]=='E'||s[l]=='I'||s[l]=='O'||s[l]=='U')
                break;
                l++;
            }
            cout<<l<<endl;
            while(r>=l){
                if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u'||s[r]=='A'||s[r]=='E'||s[r]=='I'||s[r]=='O'||s[r]=='U')
                break;
                r--;
            }
            cout<<r<<endl;
            if(l<=r){
            char ch=s[l];
            s[l]=s[r];
            s[r]=ch;}
           l++;
           r--;
        } while(l<=r);
        
       return s;
    }
};