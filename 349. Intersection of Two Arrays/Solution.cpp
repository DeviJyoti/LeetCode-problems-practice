//LINK:-https://leetcode.com/problems/intersection-of-two-arrays/description/

//CODE:-
class Solution {
public:
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int>mymap;
        for(auto n1: nums1) mymap[n1] = 1;
        for(auto n2: nums2){
            if(mymap.find(n2) != mymap.end() && mymap[n2] == 1){
                ans.push_back(n2);
                mymap[n2]--;
            }
        }
        return ans;
    }
};
