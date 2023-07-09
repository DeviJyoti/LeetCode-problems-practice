class Solution {
public:
int func(int n){
    int sum=0;
    while(n){
        sum+=pow(n%10,2);
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
        while(n){
            n=func(n);
            if(n==1 || n==7)return true;
             else if(n<=9) return false;
        }
        return false;
    }

};
