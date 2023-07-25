class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>ans){
                ans=arr[i];
            }
        }

        int res;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==ans){
                res=i;
            }
        }
        return res;
    }
};
