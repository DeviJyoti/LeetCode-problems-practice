class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        int i=0;
        int j=i;
        while(j<k){
            pq.push(make_pair(nums[j],j));
            j++;
        }
        ans.push_back(pq.top().first);
        i++;
        while(j<nums.size()){
           pq.push(make_pair(nums[j],j));
           while(pq.top().second<i){
               pq.pop();
           }
            ans.push_back(pq.top().first);
            i++;
            j++;
        }
        return ans;
    }
};
