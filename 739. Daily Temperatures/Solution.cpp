//LINK:-https://leetcode.com/problems/daily-temperatures/submissions/
//SOLUTION:-
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>vec(n,0);
        stack<int>st;
        
        for(int i=0;i<n;i++)
        {
          while(!st.empty() && temp[st.top()]<temp[i])
          {
              vec[st.top()]=i-st.top();
              st.pop();
          }
            st.push(i);
        }
        return vec;
    }
};
