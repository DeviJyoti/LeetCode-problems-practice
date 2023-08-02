class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                int start=st.top();
                int end=i;
                reverse(s.begin()+start,s.begin()+end);
                st.pop();
            } 
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]==')') continue;
            ans+=s[i];
        }
        return ans;
    }
};
