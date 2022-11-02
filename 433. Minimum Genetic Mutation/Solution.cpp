//LINK:-https://leetcode.com/problems/minimum-genetic-mutation/

class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string>st;
        queue<string>q;
        q.push(start);
        st.insert(start);
        
        int step=0;
        int n;
        while(!q.empty())
        {
            n=q.size();
            for(int i=0;i<n;i++)
            {
                string node=q.front();
                q.pop();
                if(node==end) return step;
                
                //making adjacent node
                for(char ch:"ACGT")
                {
                    for(int j=0;j<node.size();j++)
                    {
                        string adjnode=node;
                        adjnode[j]=ch;
                        if(!st.count(adjnode) &&                                      find(bank.begin(),bank.end(),adjnode)!=bank.end())
                        {
                            q.push(adjnode);
                            st.insert(adjnode);
                        }
                        
                    }
                }
                
            }
            step++;
        }
        return -1;  
    }
};
