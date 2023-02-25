class Solution 
{
public:
   vector<int>finalResult;
       int findcount(int n)
     {
          int count =0;
         while(n>0)
         {
             count++;
             n=n/10;
         }
         return count;
     }
    
    void findNumber(int num ,int n,int k)
    {
       
        if(findcount(num)==n)
        {
            finalResult.push_back(num);
            return;
        }
        for(int j=0;j<=9;j++)
        {
            int lastdigit=num%10;
            
            if(abs(lastdigit-j)==k)
            {
                int number=num*10+j;
                findNumber(number,n,k);
            }
        }
    }
  
    vector<int> numsSameConsecDiff(int n, int k)
    {
       for(int i=1;i<=9;i++)
       {
           findNumber(i,n,k);
       }
        return finalResult;
    }
};
