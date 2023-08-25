class Solution {
public:
    
    int solve(vector<int>&nums,int index){
        if(index<0) return 0;
        //choice one:-
        int ans=max(nums[index]solve(nums,index-2),solve(nums,index-1));
        return ans;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        return solve(nums,n-1);
    }
};
