// Link : https://leetcode.com/problems/shortest-distance-to-a-character/


class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> occ;
        vector<int> ans(s.length(),0);
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == c)
            {
                occ.push_back(i);
                // cout << i << " " ;
            }
        }
        // cout << endl;
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(j<occ.size()-1 && occ.size()>1 && abs(i-occ[j])>abs(i-occ[j+1]))
            {
                j++;
            }
            // cout << occ[j] ;
            ans[i]= abs(i-occ[j]);
        }

        return ans;
    }
};
