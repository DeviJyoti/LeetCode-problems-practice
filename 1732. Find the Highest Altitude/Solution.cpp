//link:-https://leetcode.com/problems/find-the-highest-altitude/description/
//solution:-

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int max=0;
        int n=gain.size();
        if(sum>max) max=sum;
        for(int i=0;i<n;i++)
        {
            sum = sum+gain[i];
            if(sum>max) max=sum;
        }
        return max;
    }
};
