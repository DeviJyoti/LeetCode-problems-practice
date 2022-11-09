//LINK:-https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            ++mp[nums[i]];
        }
        for(auto e : mp)
        {
            if(e.second==1)
            {
                ans=e.first;
                break;
            }
        }
        return ans;
    }
};
