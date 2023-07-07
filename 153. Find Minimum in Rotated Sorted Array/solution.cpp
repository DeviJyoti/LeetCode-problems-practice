class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int min=nums[0];
        // return min;

        int ans=INT_MAX;
        int left=0;
        int right=nums.size()-1;
        int mid;
        while(left<=right){
            mid=left+(right-left)/2;
            if(nums[left]<=nums[mid]){
              ans=min(ans,nums[left]);
              left=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                right=mid-1;
            }
        }
        return ans;
    }
};
