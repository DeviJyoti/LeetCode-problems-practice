class Solution {
public:
    bool solve(vector<int>nums,int w){
        int n=nums.size();
        int t[n+1][w+1];
        //Initialization
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(i==0) t[i][j]=0;
                if(j==0) t[i][j]=1;
            }
        }
        //Iterative code
        for(int i=1;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(nums[i-1]<=j){
                    t[i][j]=(t[i-1][j-nums[i-1]] || t[i-1][j]);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][w];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];

        if(sum%2!=0) return false;

        return solve(nums,sum/2);
    }
};
