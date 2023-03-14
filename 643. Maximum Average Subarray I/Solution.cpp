class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max=INT_MIN;
        double sum=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i>=k-1){
                if(sum>max) max=sum;
                sum-=nums[j];
                j++;
            }
        }
       return max/k;
    }
};
