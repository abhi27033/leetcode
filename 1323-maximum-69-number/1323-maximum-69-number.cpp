class Solution {
public:
    int maximum69Number (int num) {
        string a;
        int rev=0,c=0;
        while(num>0)
        {
            rev=rev*10+num%10;
            c++;
            num/=10;
        }
        for(int i=1;i<=c;i++)
        {
            int temp=rev%10;
            if(temp==9)
                a+="9";
            else
                a+="6";
            rev/=10;
        }
        //reverse(a.begin(),a.end());
        int i;
        for(i=0;i<c;i++)
        {
            char ch=a[i];
            if(ch=='6')
                break;
        }
       // cout<<a<<i<<endl;
        if(i<c)
        a[i]='9';
        int xx=0;
        stringstream geek(a);
        geek >> xx;
        return xx;
    }
};