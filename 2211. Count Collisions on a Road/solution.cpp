class Solution {
public:
    int countCollisions(string s) {
        stack<int>st;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
    
        if(!st.empty() && st.top()=='R' && s[i]=='L'){
            ans+=2;
            st.pop();
            st.push('S');
        }else if(!st.empty() && st.top()=='R' && s[i]=='S'){
            ans+=1;
            st.pop();
            st.push('S');
        }else if(!st.empty() && st.top()=='S' && s[i]=='L'){
            ans+=1;
        }
            else
            st.push(s[i]);
        }
        while(!st.empty() && st.top()=='R'){
            st.pop();
            
        }
        while(!st.empty()){
            if(st.top()=='R') ans++;
            st.pop();
        }
        
        return ans;
    }
};
