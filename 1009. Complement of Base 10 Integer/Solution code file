//LINK:-https://leetcode.com/problems/complement-of-base-10-integer/
class Solution {
public:
    int bitwiseComplement(int n) {
        
           //*****************FIRST METHOD*******************//
        
//         int m=n;
//         int mask=0;
//         //edge case
//         if(n==0) return 1;
//         while(m!=0)
//         {
//             mask=(mask << 1)|1;
//             m=m >> 1;
//         }
        
//         int ans = (~n )& mask;
//         return ans;
        
        
               //*****************SECOND METHOD*****************//
        
//          int m=n;
//         string bin;
//         int temp;
//         if(n==0) return 1;
//         while(m!=0)
//         {
//             if(m/2!=0)
//             {
//                 temp=m%2;
//                 if(temp==1)
//                 {
//                     bin="1"+bin;
//                 }
//                 else
//                 {
//                     bin="0"+bin;
//                 }
//                 m=m/2;
//             }
//             else
//             {
//                 bin="1"+bin;
//                 break;
//             }
            
//         }
        
//         for(int i=0;i<bin.length();i++)
//         {
//             if(bin[i]=='1')
//             {
//                 bin[i]='0';
//             }
//             else
//             {
//                 bin[i]='1';
//             }
//         }
//         int ans=0;
//         int count=0;
//         for(int i=bin.length()-1;i>=0;i--)
//         {
//             if(bin[i]=='1')
//             {
//                 ans=ans+((int)pow(2,count));

//             }
//           count++;
//         }
//         return ans;
        
        
              //**********************THIRD METHOD*********************//
        
        if(n==0) return 1;
        long long int length=((long int)log2(n)+1); //finding the length of binary number 
        int temp=1<<length;
        temp=temp-1;
        return n^temp;
    }
};
