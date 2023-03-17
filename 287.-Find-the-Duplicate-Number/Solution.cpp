class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        map<int,int>mymap;
        int j=nums.size()-1;
        for(int i=0;i<(nums.size()+1)/2;i++)
        {
            if(mymap[nums[i]]!=0) return nums[i];
            else
            {
               mymap[nums[i]]=1; 
            }
            if(mymap[nums[j]]!=0) return nums[j];
            else
            {
                mymap[nums[j]]=1;
                j--;
            } 
        }
       return 0;
    }

};
