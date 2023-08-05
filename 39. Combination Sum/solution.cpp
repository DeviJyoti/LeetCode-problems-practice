class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void solve(vector<int>&arr,int t,int index,int currSum){
        //base condition
        if(currSum==t){
            ans.push_back(temp);
            return;
        }
        if(currSum>t || index >arr.size()){
            return;
        }

        //choices
        if(index<arr.size()){
            
            temp.push_back(arr[index]);
            solve(arr,t,index,currSum + arr[index]);
            temp.pop_back();

            solve(arr,t,index+1,currSum);
        }

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
        solve(arr,t,0,0);
        return ans;
    }
};
