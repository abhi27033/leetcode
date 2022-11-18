class Solution {
public:
    int divide(int n,int x)
    {
        while(n%x==0)
            n/=x;
        return n;
    }
    bool isUgly( int n) {
        if(n==0)
            return false;
       n= divide(n,2);
       n= divide(n,3);
       n= divide(n,5);
        if(n==1)
            return true;
        else
            return false;
        
    }
};