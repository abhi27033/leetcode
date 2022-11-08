class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int cc=image[sr][sc];
        if(cc!=color)
            cl(image,sr,sc,color,cc);
        return image;
    }
    void cl(vector<vector<int>>& image,int r,int c,int color,int cc)
    {
        int temp=image[r][c];
        if(temp==cc)
        {
            image[r][c]=color;
            if(r>=1)
                cl(image,r-1,c,color,cc);
             if(c>=1)
                cl(image,r,c-1,color,cc);
            if(r<image.size()-1)
                cl(image,r+1,c,color,cc);
            if(c<image[0].size()-1)
                cl(image,r,c+1,color,cc);
        }  
    }
};