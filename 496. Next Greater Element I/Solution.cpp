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

// second method:-
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    if(j==nums2.size()-1)
                    {
                        ans.push_back(-1);
                        break;
                    }
                     for(int k=j+1;k<nums2.size();k++)
                        {
                            if(nums2[k]>nums1[i])
                            {
                                ans.push_back(nums2[k]);
                                break;
                            }
                            else if(k==nums2.size()-1 and nums2[k]<=nums1[i])
                            {
                                ans.push_back(-1);
                                    break;
                            }
                        }
                }
            }
           
        }
        return ans;
    }
};
