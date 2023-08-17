class Solution {
public:
    bool solve(vector<vector<char>>& mt,string s,int index,int i,int j){
        //base condition
        if(index>=s.length()) return true;

        if(mt[i][j]!=s[index]) return false ;

        char temp = mt[i][j];
        mt[i][j]='#';
        //  4 choice
        if(i>0){
            if(solve(mt,s,index+1,i-1,j)) return true;
        }

        if(i<mt.size()-1){
            if(solve(mt,s,index+1,i+1,j)) return true;
        }

        if(j>0){
            if(solve(mt,s,index+1,i,j-1)) return true;
        }
        if(j<mt[0].size()-1){
            if(solve(mt,s,index+1,i,j+1)) return true;
        }
        mt[i][j] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& mt, string s) {
        int n=mt.size();
        int m=mt[0].size();
        if(m==1 && n==1 && mt[0][0]==s[0] && s.length()==1) return true;
    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(solve(mt,s,0,i,j)) return true;
            }
        }
        return false;
    }
};
