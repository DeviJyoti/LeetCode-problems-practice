class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int e : nums){
            if(i==0 || i==1 || nums[i-2]!=e){
                nums[i]=e;
                i++;
            }
        }
        return i;
    }
};
