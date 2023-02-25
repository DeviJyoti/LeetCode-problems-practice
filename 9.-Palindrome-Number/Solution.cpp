class Solution {
public:
    bool isPalindrome(int x)
    { long long int num=x;
       long long int reverse_num=0;
     long long int temp=0;
        if(x>=0)
        {
            while(x>0)
            {
                temp=(reverse_num*10)+(x%10);
                reverse_num = temp;
                x=x/10;
            }
              if(reverse_num==num) return true; 
        }    
      return false; 
    }
};
