class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>sum) 
            {
                sum=0;
            }
            sum+=nums[i];
            ans=max(sum,ans);
        }
        return ans;
    }
};
