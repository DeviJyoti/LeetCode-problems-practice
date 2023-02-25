class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        int n=image.size(),temp;
        //image inverting
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)  
            {
                 if(image[i][j]==0)
                 {
                     image[i][j]=1;
                 }
                else
                {
                    image[i][j]=0;
                }
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)  
            {
                temp=image[i][j];
                image[i][j]=image[i][n-j-1];
                image[i][n-j-1]=temp;
            }
        }
        return image;
    }
};
