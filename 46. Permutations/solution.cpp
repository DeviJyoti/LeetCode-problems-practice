class Solution {
public:
     vector<vector<int>>ans;
           //method-1 using inbuilt function
    //    sort(nums.begin(),nums.end());
    //     do{
    //         ans.push_back(nums);
    //     }while(next_permutation(nums.begin(),nums.end()));

    //     return ans; 
    
    void solve(vector<int>&nums,int idx){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);

            solve(nums,idx+1);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       

  

    //Method-2 using recursion
     solve(nums,0);

     return ans;

    }
};
