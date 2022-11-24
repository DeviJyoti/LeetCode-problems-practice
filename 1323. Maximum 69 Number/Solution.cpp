//LINK:-https://leetcode.com/problems/maximum-69-number/
//SOLUTION:-
class Solution {
public:
    int maximum69Number (int num) {
        vector<int> digits;
        int n=num;
        while(n)
        {
            int digit=n%10;
            digits.push_back(digit);
            n/=10;
        }
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]==6)
            {
                digits[i]=9;
                break;
            }
        }
        int ans=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
            ans+=digits[i]*pow(10,i);
        }
        return ans;
    }
};
