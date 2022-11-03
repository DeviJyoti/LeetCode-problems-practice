//LINK:-https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/

class Solution {
public:
    
      string rev(string first)
        {
          swap(first[0],first[1]);
            return first;
          
        }
    
    
    int longestPalindrome(vector<string>& word) {
        string temp;
        int len=0;
         int flag=0;
        map<string,int>smp;
        map<string,int>dmp;
        
        //inserting into map
        for(int i=0;i<word.size();i++)
        {
            temp=word[i];
            if(temp[0]==temp[1])
            {
                ++smp[word[i]];
            }
            else
            {
                ++dmp[word[i]];
            }
        }
        
        //for same map
        for(auto e : smp)
        {
           
            if((e.second)%2==0)//even
            {
                len+=(e.second)*2;
            }
            else   //odd
            {
                if(e.second>0)
                {
                    if(flag==0 )
                {
                        cout << e.first  << " flag 0 h vro"<< endl;
                    len+=(e.second)*2; //first odd
                    flag=1;
                }
                else
                {
                    cout << e.first  << " flag 1 h vro"<< endl;
                    int temp=e.second-1; //another odd
                    len+=temp*2;
                }   
                }
                
            }
        }
        
       // for different map
        for(auto e : dmp)
        {
            string revers =rev(e.first);
            if(dmp[revers]!=0)
            {
                if(e.second>dmp[revers])
                {
                    len+=(dmp[revers])*2;
                }
                else
                {
                    len+=(e.second)*2;
                }
            }
        }
      
       return len; 
        
    }
};
