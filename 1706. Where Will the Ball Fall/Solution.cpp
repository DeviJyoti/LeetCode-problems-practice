//LINK:-https://leetcode.com/problems/where-will-the-ball-fall/

class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>arr;
        int i;
        int temp;
        
        for(int j=0;j<n;j++)
        {
            temp=j;
            i=0;
            while(i!=m)
            {
                if(grid[i][j]==1) //right
                {
                    if(j==n-1)
                    {
                        arr.push_back(-1);
                        break;
                    }
                    else if(grid[i][j]!=grid[i][j+1]) 
                    {
                        arr.push_back(-1);
                        break;
                    }
                    else 
                    {
                        i++;
                        j++;
                    }

                }
                else //left
                {
                    if(j==0) 
                    {
                        arr.push_back(-1);
                        break;
                    }
                    else if(grid[i][j]!=grid[i][j-1]) 
                    {
                        arr.push_back(-1);
                        break;
                    }
                    else
                    {
                        i++;
                        j--;
                    }

                }
               
            }
            if(i==m)
            arr.push_back(j);
            j=temp;
        }
        
        return arr;
    }
};
