class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        unordered_map<int,int>mp;
        long long i=1;
        long long sum=0;
        while(n){
            if(mp.find(i)==mp.end()){
                mp[target-i]++;
                sum+=i;
                n--;
            }
            i++;
        }
        return sum;
    }
};
