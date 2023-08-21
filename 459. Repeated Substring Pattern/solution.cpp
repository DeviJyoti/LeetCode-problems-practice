class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        int j=0;
        int nextstart;
        int len;
        string s1;
        while(j<n/2){

            if(n%(j+1)==0){

            len=j+1;
            s1=s.substr(0,len);
            nextstart=j+1;
            while(nextstart<n){
                if(s1==s.substr(nextstart,len)){
                    nextstart+=j+1;
                }else{
                    break;
                }
            }
            if(nextstart==n) return true;
            }
            j++;
        }
        return false;
    }
};
