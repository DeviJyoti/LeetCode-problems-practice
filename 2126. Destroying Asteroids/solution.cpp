class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        int n= ast.size();
        long long sum=mass;
        sort(ast.begin(),ast.end());

        for(int i=0;i<n;i++){
         if(ast[i]>sum) return false;
         sum+=ast[i];
        }
        return true;
    }
};
