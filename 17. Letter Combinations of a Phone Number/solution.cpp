class Solution {
public:
     vector<string>ans;
     void solve(string digits,string output,int index,string mapping[]){
        //base case
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int number = digits[index]-'0';
        string value = mapping[number];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,output,index+1,mapping);
            output.pop_back();
        }
     }


    vector<string> letterCombinations(string digits) 
    {
        if(digits.length()==0) return ans;
        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,mapping);
        return ans;
    }
};
