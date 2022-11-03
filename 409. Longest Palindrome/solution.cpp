//LINK:-https://leetcode.com/problems/longest-palindrome/
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int len=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            ++mp[s[i]];
        }
        for(auto e : mp)
        {
            //for even 
            if((e.second)%2==0)
            {
                len+=e.second;
            }
            else if(e.second>0)
            {
                if(flag==0)
                {
                    len+=e.second;
                    flag=1;
                }
                else{
                    int temp=(e.second)-1;
                    len+=temp;
                }
            }
        
        }
        return len;
    }
};
