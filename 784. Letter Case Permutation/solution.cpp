class Solution {
public:
    vector<string>ans;
    void solve(int index,int n,string &s){
        if(index==n){
          ans.push_back(s);
          return;
        }
        if(index>n){
            return;
        }
        if(index<n){
            char c= s[index];
            if(islower(c)){
               s[index] = toupper(c);
            }
             if(isupper(c)){
                s[index] = tolower(c);
                
            }
            solve(index+1,n,s);
        if (isalpha(c)) 
        {
             s[index]= c;
            solve(index+1,n,s);
        }
        }
    }

    vector<string> letterCasePermutation(string s) {
        solve(0,s.size(),s);
        return ans;
    }
};
