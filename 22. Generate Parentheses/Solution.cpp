//LINK:-https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
 
    bool valid(string s)
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
                if(stack.back()=='(' && s[i]==')')
                {
                    stack.pop_back();  
                                      //stack is not empty and last element is equal to the opening bracket and ith element is not equal to the closing bracket than pop out the last element from the stack
                }

              else
                {
                    //if i is equal to the opening bracket than push it into the stack
                   stack.push_back(s[i]);

                }
            }
          }
        if(stack.empty()) return true;
        else return false;
 
        
    }
    vector<string>arr;
  void rec(string ans,int n,int count1,int count2)
    {
       //base condition
       if(ans.length()==2*n)
       {
           
           //check the parentheses valid or not
            if(valid(ans))
            {
               arr.push_back(ans);
            }
           
       }
       else
       {
           if(count1<n)
           {
               ans=ans+"(";
               rec(ans,n,count1+1,count2);
               ans.pop_back();
           }
           if(count2<n)
           {
               ans=ans+")";
               rec(ans,n,count1,count2+1);
               ans.pop_back();
           }
       }

        
    }
    
    vector<string> generateParenthesis(int n) {
        int count1=0;
        int count2=0;
        string res="";
        rec(res,n,count1,count2);
        return arr;
    }
};
