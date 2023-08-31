// Link : https://leetcode.com/problems/add-strings/description/

// Code : 
class Solution {
public:
    pair<char,char> add(char a,char b,char carry)
    {
        int x = a-'0';
        int y = b-'0';
        int c = carry-'0';

        int sum = x+y+c;

        return make_pair(sum%10 + '0',sum/10 + '0');
    }
    string addStrings(string m, string n){
        int i=m.length()-1;
        int j=n.length()-1;
        
        char carry='0';
        pair<char,char> temp;
        string ans="";
        while(i>=0 && j>=0)
        {
            temp = add(m[i],n[j],carry);
            carry = temp.second;
            ans = ans + temp.first;
            i--;
            j--;
        }
        while(i>=0)
        {
            temp = add(m[i],'0',carry);
            carry = temp.second;
            ans = ans + temp.first;
            i--;
        }
        while(j>=0)
        {
            temp = add('0',n[j],carry);
            carry = temp.second;
            ans = ans + temp.first;
            j--;
        }
        if(carry!='0')
        {
            ans = ans + carry;
        }

        reverse(ans.begin(),ans.end());

        return ans;

        
    }
};
