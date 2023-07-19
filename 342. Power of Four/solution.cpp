class Solution {
    float logbase(int a, int b)
{
    return log(a) / log(b);
}
public:
    bool isPowerOfFour(int n) {
        if(n==0)return false;
        float x = logbase(n,4);
        if(floor(x)==x)return true;
        return false;
    }
};
