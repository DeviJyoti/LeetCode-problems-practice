//LINK:-https://leetcode.com/problems/implement-queue-using-stacks/
//solution:-class MyQueue {
    
public:
    stack<int> st1;
    stack<int> st2;
    
    void push(int x) {
        if(st1.empty())
        {
            st1.push(x);
        }
        else
        {
            while(!st1.empty())
            {
             
                st2.push(st1.top());
                st1.pop();
            }
            st1.push(x);
            while(!st2.empty())
            {
                
                st1.push(st2.top());
                st2.pop();
            }
        }
    }
    
    int pop() {
        int ans=st1.top();
        st1.pop();
        return ans;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
