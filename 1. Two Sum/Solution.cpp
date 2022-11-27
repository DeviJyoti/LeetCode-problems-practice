#Link for problem :- https://leetcode.com/problems/two-sum/
//solution:-
class Solution 
{
    public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<int>result;
        map<int,int>mymap;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mymap.find(nums[i])==mymap.end())
            {
                mymap[nums[i]]=i;
            }
            
            
            if(mymap.find(target-nums[i])!=mymap.end() && i!=mymap[target-nums[i]])
            {
                result.push_back(i);
                result.push_back(mymap[target-nums[i]]);
                break;
            }
        }
        return result;
        
    }
};
