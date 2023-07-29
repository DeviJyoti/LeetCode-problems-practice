class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>res;
        stack<int>s;
        int n=nums.size();

         for(int i=2*n-1;i>=0;i--){
             while(!s.empty() && s.top()<=nums[i%n]){
                 s.pop();
             }
             if(i<n){
                 if(!s.empty()){
                     res.push_back(s.top());
                 }else{
                     res.push_back(-1);
                 }
             }
             s.push(nums[i%n]);
         }
         reverse(res.begin(),res.end());
         return res;
    }
};
