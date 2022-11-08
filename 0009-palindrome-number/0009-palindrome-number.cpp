class Solution {
public:
    bool isPalindrome(int x) {
        long z=0;
        long xx=x;
        while(x>0)
        {
            z=z*10+x%10;
            x/=10;
        }
        if(xx==z&&xx>=0)
            return true;
        else
            return false;
    }
};