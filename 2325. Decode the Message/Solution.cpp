// Link : https://leetcode.com/problems/decode-the-message/


class Solution {
public:
    string decodeMessage(string key, string message) {
        
        map<char,char> mp;
        char alpha = 'a';
        for(char ch:key)
        {
            if(mp.find(ch) == mp.end() && ch!=' ')
            {
                mp[ch] = alpha;
                alpha +=1;
            }
        }

        for(int i=0;i<message.length();i++)
        {
            if(message[i]!=' ')
            message[i] = mp[message[i]];
        }

        return message;
    }
};
