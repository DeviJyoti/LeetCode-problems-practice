//LINK:-https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/

//SOLUTION:-
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%3==0 && nums[i]%2==0)
            {
                sum=sum+nums[i];
                count++;
            }
        }
        return count !=0 ? sum/count: 0; 
        //if count = 0 return 0 and if count is not equal to zero then return the average(sum/count)
    }
};
