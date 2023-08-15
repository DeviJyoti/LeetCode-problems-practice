class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        if(word1.size()==0 && word2.size()==0) return ans;

        //if size of both strings is same
        int n=word1.size();
        int m=word2.size();
        int i=0;
        int j=0;
        while(i<n && j<m){
            ans+=word1[i];
            ans+=word2[j];
            i++;
            j++;
        }
        while(i<n){
            ans+=word1[i];
            i++;
        }
        while(j<m){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};
