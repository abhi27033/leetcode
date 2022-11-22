class Solution {
public:
    int minDeletions(string s) {
        map<char,int> v;
        for(auto it:s)
        {
            v[it]++;
        }
         int ar[v.size()],x=0;
        for(auto it:v)
        {
            ar[x++]=it.second;
        }
       sort(ar,ar+v.size());
        //int n=v.size();
        int ans=0;
        stack<int> xx;
        int z=1;
        
        for(int i=0;i<x-1;i++){
           while(ar[i]>z)
           {
               xx.push(z);
               z++;
           }
            if(ar[i]==ar[i+1])
            {
               if(xx.empty())
                   ans+=ar[i];
                else{
                    ans+=(ar[i]-xx.top());
                    xx.pop();
                    }
            }
            else 
                z++;
       
        }
        return ans;
    }
};