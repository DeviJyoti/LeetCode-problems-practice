//LINK:-https://leetcode.com/problems/find-all-duplicates-in-an-array/
//SOLUTION:-
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mymap;
        for(int i=0;i<nums.size();i++)
        {
            ++mymap[nums[i]];
        }
        nums.clear();
        for(auto e:mymap)
        {
            if(e.second>1) nums.push_back(e.first);
        }
        return nums;
    }
};
