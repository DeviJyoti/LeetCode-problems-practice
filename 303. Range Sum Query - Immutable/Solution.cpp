//link:-https://leetcode.com/problems/range-sum-query-immutable/
//solution:-
class NumArray {
public:
    
    vector<int>vec;
    NumArray(vector<int>& nums) {
     
        int n=nums.size();
        vec.clear();
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                vec.push_back(nums[i]);
            }
            else
            {
                vec.push_back(nums[i]+vec[i-1]); //prefix sum
            }
        }
    }
    
    int sumRange(int left, int right) {
        
        if(left==0) return vec[right];
        return vec[right]-vec[left-1];
        //return accumulate(nums.begin()+left,nums.begin()+right+1,0);    broute force approch 
    }
    
    
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */ 
