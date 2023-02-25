// https://leetcode.com/problems/roman-to-integer/
//code:
class Solution {
public:
    
    int r(char x)
    {
        
        if(x=='I') return 1;
        if(x=='V') return 5;
        if(x=='X') return 10;
        if(x=='L') return 50;
        if(x=='C') return 100;
        if(x=='D') return 500;
        if(x=='M') return 1000;
        return 0;
    }
    int romanToInt(string s)
    {
        int number=0;
        int num=0;
        for(int i=0;i<s.length();i++)
        {
            if(i!=s.length()-1)
            {
                 if(r(s.at(i))<r(s.at(i+1)))
                {
                     
                     num=r(s.at(i+1))-r(s.at(i));
                     number=number+num;
                     i++;
                }
                else
                {
                    number=number+r(s.at(i));
                }
                
            }
            else
                number=number+r(s.at(i));
           
        }
        return number;
    }
};
