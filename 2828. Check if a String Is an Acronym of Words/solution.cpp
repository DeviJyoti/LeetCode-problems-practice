class Solution {
public:
    bool isAcronym(vector<string>& word, string s) {
        
        if(word.size()==0 && s.size()==0) return true;
        if(word.size()!=0 && s.size()==0) return false;
        if(s.size()!=0 && word.size()==0) return false;
        
        string ans ="";
        for(int i=0;i<word.size();i++){
            ans+=word[i][0];
        }
        if(ans==s) return true;
        return false;
    }
};
