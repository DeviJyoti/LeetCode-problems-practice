class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int i=1;

        while(n>0){
            i++;
            n-=i;
        }
        return i-1;
    }
};
