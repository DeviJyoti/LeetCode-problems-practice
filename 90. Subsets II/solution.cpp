class Solution {
public:
  set<vector<int>>st;
    vector<int>temp;
    void solve(int index,int n,vector<int>&nums){
        //base condition
        if(index == n){
            sort(temp.begin(),temp.end());
            st.insert(temp);
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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         int n=nums.size();
         sort(nums.begin(),nums.end());
         solve(0,n,nums);
         
        vector<vector<int>>ans;
        for(auto e : st){
            ans.push_back(e);
        }
        return ans;
    }
};
