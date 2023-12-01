class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> generate(int n) {
        for(int i=0;i<n;i++){
            vector<int>temp(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    //starting me and end me 1 add krdo
                    temp[j]=1;
                }
                else{
                    temp[j]=(ans[i-1][j-1]+ans[i-1][j]);
                }
                
            }
            ans.push_back(temp);
                temp.clear();
        }
        return ans;
    }
}; 
