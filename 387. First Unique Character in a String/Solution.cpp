//link:-https://leetcode.com/problems/first-unique-character-in-a-string/description/
//code:-
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mymap;
        int ans=-1;
        int n=s.length();
        for(char& c : s)
        { 
            mymap[c]++;
        }
        for(int i=0;i<n;i++)
        {
           if(mymap[s[i]]==1) 
           return i;
        }
    return -1;
    }
};
