//LINK:-https://leetcode.com/problems/group-anagrams/
//CODE:-
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mymap; //for storing original string in value part
        int n=strs.size();
        string temp;
        for(int i=0;i<n;i++)
        {
            temp=strs[i];
            sort(temp.begin(),temp.end());
            mymap[temp].push_back(strs[i]); 
        }
        vector<vector<string>>result;
        for(auto e : mymap)
        {
            result.push_back(e.second);
        }
        return result;
    }
};
