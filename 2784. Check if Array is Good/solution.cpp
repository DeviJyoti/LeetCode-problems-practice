class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size()==1) return false;
        
        int n = nums.size()-1;
        sort(nums.begin(),nums.end());
        

        
        for(int i=0;i<n;i++)
        {
                if(nums[i]!=i+1)
                {
                    return false;
                }       
        }
        if(nums[n]!=n)
            return false;
        
        return true;
    }
};
