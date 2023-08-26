class Solution {
public:
    int t[101][101];
    bool solve(string &s1, string &s2, string &s3,int l1,int l2,int l3){

        if(l1<0 && l2<0 && l3<0) return true;

        if(t[l1+1][l2+1]!=-1) return t[l1+1][l2+1];

        bool temp=false;
        if(l1>=0 && l2>=0 && l3>=0 && s1[l1]==s3[l3] && s2[l2]==s3[l3]){
            temp=solve(s1,s2,s3,l1-1,l2,l3-1) || solve(s1,s2,s3,l1,l2-1,l3-1);
        }else if(l1>=0 && l3>=0 && s1[l1]==s3[l3]){
            temp= solve(s1,s2,s3,l1-1,l2,l3-1);
        }else if(l2>=0 && l3>=0 && s2[l2]==s3[l3]){
            temp =solve(s1,s2,s3,l1,l2-1,l3-1);
        }
        return t[l1+1][l2+1]=temp;
    }

    bool isInterleave(string s1, string s2, string s3) {
    
        int l1=s1.length();
        int l2=s2.length();
        int l3=s3.length();
        memset(t,-1,sizeof(t));
        if(l3!=(l1+l2)) return false;
        return solve(s1,s2,s3,l1-1,l2-1,l3-1);
    }
};
