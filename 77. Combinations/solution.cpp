class Solution {
public:
  void solve(int start,int n,vector<vector<int>>&res,vector<int>&subset,int k){
      if(k==0){
          res.push_back(subset);
          return;
      }
      if(start==n+1) return;

       solve(start+1,n,res,subset,k);

       subset.push_back(start);

        solve(start+1,n,res,subset,k-1);
         subset.pop_back();
  }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int>subset;
        solve(1,n,res,subset,k);
        return res;
    }
};
