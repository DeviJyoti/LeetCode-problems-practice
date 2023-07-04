class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       unordered_set<int> s;
       vector<int> ans;
       for (auto i: nums){
         s.insert(i);
       }
       for (int i = 1; i <= nums.size(); i++){
         if(s.find(i) == s.end()){
           ans.push_back(i);
         }
       }
       return ans;
    }
};
