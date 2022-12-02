//LINK:-https://leetcode.com/problems/merge-sorted-array/
//SOLUTION:-
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>vec;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(nums1[i]>nums2[j])
            {
             vec.push_back(nums2[j]);
                j++;    
            }
            else
            {
                vec.push_back(nums1[i]);
                i++;
            }
        }
        while(i<m)
        {
            vec.push_back(nums1[i]);
            i++;
        }
          while(j<n)
        {
            vec.push_back(nums2[j]);
            j++;
        }
        nums1=vec;
        vec.clear();
        
    }
};
