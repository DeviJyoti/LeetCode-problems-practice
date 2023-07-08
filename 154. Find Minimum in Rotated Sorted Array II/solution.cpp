class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mid=left+(right-left)/2;
        
        while(left<right){
            
            if(nums[mid]>nums[right]){
                left=mid+1;

            }else if(nums[mid]<nums[right])
            {
               right=mid;
            }
            else if(nums[right]==nums[right-1]){
                right--;
            }else{
                left++;
            }
            mid=left+(right-left)/2;
        }
        return nums[left];
    }
};
