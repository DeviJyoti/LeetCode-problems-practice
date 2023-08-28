class Solution {
public:
    int minimumSum(int n, int k) {
        int sum=0;
        int i=1;
        unordered_set<int>st;
        while(n){
            if(st.find(i)==st.end()){
                st.insert(k-i);
                sum+=i;
                n--;}
                i++;
        }
 return sum;
    }
};
