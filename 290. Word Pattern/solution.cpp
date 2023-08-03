class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,char> mp1;
        int j=0;
        for(int i=0;i<pattern.size();i++){
            string temp="";
            if(j>=s.size()) return 0; // shortage of words
            while(j<s.size() && s[j]!=' '){
                temp+=s[j];
                j++;
            }
            j++;
            if(mp.find(pattern[i])!=mp.end()){
                if(mp[pattern[i]]!=temp) return 0;
            }
            if(mp1.find(temp)!=mp1.end()){
                if(mp1[temp]!=pattern[i]) return 0;
            }
            mp[pattern[i]]=temp;
            mp1[temp]=pattern[i];
        }
        if(j<s.size()) return 0; // check if more words are still remaining in s
        return 1;

    }
};
