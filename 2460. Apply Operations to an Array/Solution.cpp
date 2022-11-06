//LINK:-https://leetcode.com/contest/weekly-contest-318/problems/apply-operations-to-an-array/

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> vec;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=2*nums[i];
                nums[i+1]=0;
            }  
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                vec.push_back(nums[i]);
            }
        }
        
        while(nums.size()!=vec.size())
        {
            vec.push_back(0);
        }
        for(int i=0;i<vec.size();i++)
        {
            nums[i]=vec[i];
        }
        vec.clear();
        return nums;
    }
};
