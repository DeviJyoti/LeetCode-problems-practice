//LINK:-https://leetcode.com/problems/contains-duplicate/
//SOLUTION:-

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>myset;
        for(auto e : nums)
        {
            if(myset.find(e)!=myset.end()) return true;
            myset.insert(e);
        }
      return false;
    }
};
