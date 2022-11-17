class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1=abs(ax1-ax2)*abs(ay1-ay2);
        int area2=abs(bx1-bx2)*abs(by1-by2);
        int x=0,y=0,over=0;
        x=min(ax2,bx2)-max(ax1,bx1);
        y=min(ay2,by2)-max(ay1,by1);
        if(x>0&&y>0)
            over=x*y;
        return area1+area2-over;
    }
};