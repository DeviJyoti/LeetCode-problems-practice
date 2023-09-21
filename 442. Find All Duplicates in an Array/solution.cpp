class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int>res;
        int n=arr.size();
        int index,val;
        for(int i=0;i<n;i++){
            //make the element nagetive
            index=abs(arr[i]);

            val=arr[index-1];

            if(val<0) {
                res.push_back(abs(arr[i]));
            }else{
                arr[index-1]=-arr[index-1];
            }

        }
        return res;
    }
};
