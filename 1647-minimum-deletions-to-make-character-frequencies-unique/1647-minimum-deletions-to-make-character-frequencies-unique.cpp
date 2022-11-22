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
           // cout<<it.first<<" "<<it.second<<endl;
            ar[x++]=it.second;
        }
       sort(ar,ar+v.size());
        //int n=v.size();
        int ans=0;
        stack<int> xx;
        /*set<int> tp;
        for(int i=0;i<x;i++)
            tp.insert(ar[i]);*/
        int z=1;
        /*for(auto it:tp)
        {
            //cout<<it<<endl;
            while(it>z)
            {
                xx.push(z);
                z++;
            }
            z++;
        }*/
        /*cout<<endl;
        while(!(xx.empty()))
        {
            cout<<xx.top()<<" ";
            xx.pop();
        }
        cout<<endl;*/
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
                //i++;
             
                
            }
            else 
                z++;
       
        }
        return ans;
    }
};