//code:
class Solution {
public:
    bool isValid(string s) 
    {
        vector<char>stack;
        for(int i=0;i<s.length();i++)
        {
                                       //if stack is empty than puh the element...
            if(stack.empty()) 
            {
                stack.push_back(s[i]);
            }
            else 
            {
              if((stack.back()=='(' && s[i]==')') ||  (stack.back()=='{' && s[i]=='}') || (stack.back()=='[' && s[i]==']'))
                {
                    stack.pop_back();  
                                      //stack is not empty and last element is equal to the opening bracket and ith element is not equal to the closing bracket than pop out the last element from the stack
                }

              else if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                {
                    //if i is equal to the opening bracket than push it into the stack
                   stack.push_back(s[i]);
                }
               else  return false;
            }
          }
        if(stack.size()==0) return true;
        else return false;
    }
   
};
