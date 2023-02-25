class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        map<int,int>mymap;
        for(int i=0;i<nums.size();i++)
        {
            ++mymap[nums[i]];
        }
         nums.clear();
        for(auto e:mymap)
        {
            while(e.second!=0)
            {
                nums.push_back(e.first);
                --e.second;
            }
        }
    }
};
