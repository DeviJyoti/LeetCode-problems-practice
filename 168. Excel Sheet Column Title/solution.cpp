class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber){
           if(columnNumber%26!=0){
                int x = columnNumber%26;
            ans.push_back(x+64);
            columnNumber/=26;
           }
           else{
               ans.push_back('Z');
               int x = columnNumber/26;
               columnNumber = x-1;
           }
        }
        reverse(ans.begin() ,ans.end());
        return ans;
    }
};
