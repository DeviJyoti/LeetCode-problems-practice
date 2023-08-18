class Solution {
public:

    vector<vector<int>>generateMatrix(int n) {
        vector<vector<int>>mt(n,vector<int>(n));

        int top=0;
        int left=0;
        int right=n-1;
        int bottom=n-1;
        int k=1;

        while(top<=bottom && left<=right){
       //traversing from left to right
       for(int i=left;i<=right;i++){
           mt[top][i]=k;
           k++;
       }
       top++;

       //traversing from top to bottom
       for(int i=top;i<=bottom;i++){
           mt[i][right]=k;
           k++;
       }
       right--;

       //traversing from right to left
       if(top<=bottom){
             for(int i=right;i>=left;i--){
           mt[bottom][i]=k;
           k++;
       }
       bottom--;

       }
     
       //traversing from bottom to top
       if(left<=right){
            for(int i=bottom;i>=top;i--){
           mt[i][left]=k;
           k++;
       }
       left++;
        
       }
    }
        return mt;
    }
};
