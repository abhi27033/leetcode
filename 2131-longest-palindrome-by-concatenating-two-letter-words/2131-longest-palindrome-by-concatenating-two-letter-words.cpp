class Solution {
public:
     int longestPalindrome(vector<string>& words) 
     {
       // sort(words.begin(),words.end());
       map <string,int> a;
        for(int i= 0;i<words.size();i++)
            a[words[i]]++;
        // for (auto itr = a.begin(); itr != a.end(); ++itr) {
        //cout << itr->first
        //     << '\t' << itr->second << '\n';
        // }
        int x=0,c=0,flg=0;
        for(auto it:a)
        {
            string temp=it.first;
            reverse(temp.begin(),temp.end());
            if(a.find(temp)!=a.end()&&temp!=it.first)
            {
                cout<<min(a[temp],it.second)<<endl;
                c+=min(a[temp],it.second);
                 a.erase(temp);
              //  cout<<"pass "<<p++<<"c is: "<<c<<endl;
            }
            else if(temp==it.first){
               // ma=max(ma,it.second);
                if(it.second%2==1)
                    flg=1;
               //cout<< it.second/2<<endl;
                x+=it.second/2;
                //cout<<x<<endl;
            }
           
        }
       // cout<<x<<flg;
        int ans=x*4+flg*2+c*4;
        return ans;
    }
};