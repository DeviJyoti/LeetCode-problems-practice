class Solution {
public:
    int solve(vector<int>&temp,int n){
        int gap=INT_MIN;
        if(temp.size()==0) return 0;

        for(int i=0;i<temp.size()-1;i++){
            gap=max(gap,(temp[i+1]-temp[i])-1);
        }
        gap=max(gap,n-(temp[temp.size()-1]-temp[0])-1);
        
        if(gap%2!=0) 
        gap++;

        return gap/2;
    }
    int minimumSeconds(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int ans=INT_MAX;
        int n=nums.size();

        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int value;
        vector<int> temp;
        for(auto e:mp)
        {
            value=e.first;
            temp=e.second;
            ans = min(ans , solve(temp,n));

        }



        return ans;
    }
};
