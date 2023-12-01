class Solution {
public:
    vector<int>prev;

    vector<int> getRow(int rowIndex) {
        for(int i=0;i<=rowIndex;i++){
            vector<int>curr(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    curr[j]=1;
                }else{
                    curr[j]=prev[j]+prev[j-1];
                }
            }
            prev=curr;
            curr.clear();
        }
        return prev;
    }
};
