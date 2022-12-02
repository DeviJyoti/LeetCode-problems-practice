//LINK:-https://leetcode.com/problems/assign-cookies/
//SOLUTION:-
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0,count=0;
        sort(g.begin(),g.end());
         sort(s.begin(),s.end());
       while(i<g.size() && j<s.size())
       {
           if(s[j]>=g[i])
           {
               count++;
               i++;
               j++;
           }
           else
           {
             j++;   
           }
          
       }
        return count;
    }
};
