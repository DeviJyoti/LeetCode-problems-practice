//LINK:-https://leetcode.com/problems/merge-similar-items/description/
//code:-
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>res;
        map<int,int>mymap;
        for(vector<int>i:items1)
        {
            mymap[i[0]]+=i[1];
        }
         for(vector<int>i:items2)
        {
            mymap[i[0]]+=i[1];
        }
        for(auto e : mymap)
        {
            res.push_back({e.first,e.second});
        }
        return res;
    }
};
