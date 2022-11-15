// Link :- https://leetcode.com/problems/next-greater-element-i/description/

// code :- 


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        map<int,int> mp;
        stack<int> s;
        for(int i=0;i<nums2.size();i++)
        {
            while(!s.empty() && s.top()<nums2[i])
            {
                mp[s.top()]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }

        while(!s.empty())
        {
            mp[s.top()]=-1;
            s.pop();
        }

        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};
