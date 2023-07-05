class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        vector<int>vec(st.begin(),st.end());
        sort(vec.begin(),vec.end());
        if(vec.size()<3){
            return vec[vec.size()-1];
        }
        return vec[vec.size()-3];
    }
};
