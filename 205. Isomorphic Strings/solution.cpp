class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> ms;
        unordered_map<char, vector<int>> mt;
        for(int i = 0 ; i < s.length() ; i++)
        {
            ms[s[i]].push_back(i);
            mt[t[i]].push_back(i);
        }
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(ms[s[i]].size() != mt[t[i]].size()) return false;
            for(int j = i ; j < ms[s[i]].size() ; j++)
            {
                if(ms[s[i]][j] != mt[t[i]][j]) return false;
            }
        }
        return true;
        
        
    }
};
