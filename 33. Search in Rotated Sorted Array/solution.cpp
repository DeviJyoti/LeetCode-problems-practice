class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left =0;
        int right = n-1;
        int mid;
        while(left<=right){
            mid=left+(right-left)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[mid] >=nums[left]){
                //array is non-rotated
                if(target >= nums[left] && target<=nums[mid]){
                    right=mid-1;
                }else{
                    left=mid+1;
                }   
            }else{
                //array is rotated
                   if(target >= nums[mid] && target<=nums[right]){
                    left=mid+1;
                }else{
                   right=mid-1; 
                }   
            }
        }
        return -1;
    }
};
