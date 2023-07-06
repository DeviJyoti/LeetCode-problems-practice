class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int sum=0;
        for(int i =0;i<nums.size();i++){
            sum=max(sum+nums[i],nums[i]);
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
