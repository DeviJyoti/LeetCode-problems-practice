class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;

    void solve(int index,int n,vector<int>&nums){
        //base condition
        if(index == n){
            ans.push_back(temp);
            return;
        }
        if(index>n) return;


        //choise
        if(index<n){
        temp.push_back(nums[index]);
        solve(index+1,n,nums);
        temp.pop_back();
         solve(index+1,n,nums);
        }
       

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        solve(0,n,nums);
        return ans;
    }
};
