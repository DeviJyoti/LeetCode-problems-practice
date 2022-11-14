//LINK:-https://leetcode.com/problems/valid-anagram/

//solution:-
class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char>st1;
        multiset<char>st2;
        for(int i=0;i<s.length();i++)
        {
            st1.insert(s[i]);
        }
        for(int i=0;i<t.length();i++)
        {
            st2.insert(t[i]);
        }
        if(st1==st2) return true;
        else
            return false;
    }
};
