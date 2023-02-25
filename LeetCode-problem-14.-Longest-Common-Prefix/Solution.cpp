class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         
        if(strs.size()==0) return "";
        string answer=strs[0];
        for(int i=0;i<strs.size();i++)
        {
            //comparing 
            if(strs[i]=="") return "";
            if(answer.length()>strs[i].length())
            {
                    answer=answer.substr(0,strs[i].length());
            }
            for(int j=0;j<answer.length();j++)
            {
                if(answer[j]!=strs[i][j])
                {
                    answer=answer.substr(0,j);
                    break;
                }
            }
        }
        return answer;
    }
};
